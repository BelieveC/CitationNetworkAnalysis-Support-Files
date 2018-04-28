from itertools import groupby
import hashlib
import csv

def load_dblp_arnet(infname, outfname):
    with open(infname, 'rb') as f, open(outfname, 'wb') as csvfile:
        csv_writer = csv.writer(
            csvfile, delimiter=' ',
            quotechar=' ', quoting=csv.QUOTE_MINIMAL)
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
                    elif item.startswith('#%'):
                        refs = item[2:].split(',')
                    
                for ref in refs:
                    csv_writer.writerow(
                    [(hashlib.sha256(idx).hexdigest())[0:8], (hashlib.sha256(ref).hexdigest())[0:8]])
                count += 1
                print '\r%d\tlines' % (count,),

def main():
    load_dblp_arnet("infname.csv","citations.csv")

if __name__ == '__main__':
    main()