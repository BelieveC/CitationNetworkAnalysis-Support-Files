def load_dblp_arnet(infname, outfname):
    with open(infname, 'rb') as f, open(outfname, 'wb') as csvfile:
        csv_writer = csv.writer(
            csvfile, delimiter=',',
            quotechar='|', quoting=csv.QUOTE_MINIMAL)
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
                    elif item.startswith('#@'):
                        authors = item[2:].split(',')
                    elif item.startswith('#t'):
                        year = item[2:]
                    elif item.startswith('#c'):
                        venue = item[2:]
                    elif item.startswith('#index'):
                        idx = item[6:]
                    elif item.startswith('#!'):
                        abstract = item[2:]
                    elif item.startswith('#%'):
                        refs.append(item[2:])
                csv_writer.writerow(
                    [idx, title, venue, authors, year, refs, abstract])
                count += 1
                print '\r%d\tlines' % (count,),
