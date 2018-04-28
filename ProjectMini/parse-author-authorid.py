from itertools import groupby
import csv
import hashlib

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
                    if item.startswith('#index'):
                        idx = item[6:]
                    elif item.startswith('#@'):
                        authors = item[2:].split(',')

                for author in authors:
                    csv_writer.writerow(((hashlib.sha256(author).hexdigest())[0:8], author))
                count += 1
                print '\r%d\tlines' % (count,),

def main():
    load_dblp_arnet("infname.csv","authorid-author.csv")

if __name__ == '__main__':
    main()