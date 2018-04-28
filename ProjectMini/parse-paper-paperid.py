from itertools import groupby
import hashlib
import csv

def load_dblp_arnet(infname, outfname):
    with open(infname, 'rb') as f, open(outfname, 'wb') as csvfile:
        csv_writer = csv.writer(
            csvfile)
        count = 0
        for key, group in groupby(f, key=lambda l: l.strip(' \n\r') == ''):
            if not key:
                refs = []
                authors = []
                title, venue, year, idx, abstract = [''] * 5
                for item in group:
                    item = item.strip(' \r\n')
                    if item.startswith('#*'):
                        title = item[2:]
                        title = title.strip(" ")
                        title = title.strip(",")
                        title = title.strip("\'")
                    elif item.startswith('#index'):
                        idx = item[6:]

                csv_writer.writerow(
                    ((hashlib.sha256(idx).hexdigest())[0:8],(hashlib.sha256(idx).hexdigest())[0:8]))
                count += 1
                print '\r%d\tlines' % (count,),

def main():
    load_dblp_arnet("infname.csv","paperid-paperid.csv")
    csv_file ='paper-title.csv'
    txt_file ='paper-title.txt'
    with open(txt_file, "w") as my_output_file:
        with open(csv_file, "r") as my_input_file:
            [ my_output_file.write(" ".join(row)+'\n') for row in csv.reader(my_input_file)]
            # for row in csv.reader(my_input_file):
            #     print row
        my_output_file.close()

if __name__ == '__main__':
    main()