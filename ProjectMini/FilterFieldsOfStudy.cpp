#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> vec[24];

int main()
{
    ll i,j,k;
    vec[0].push_back("artificial");
    vec[0].push_back("intelligence");
    vec[0].push_back("breadth first search");
    vec[0].push_back("depth first search");
    vec[0].push_back("ac3");
    vec[0].push_back("neural");
    vec[0].push_back("networks");
    vec[0].push_back("intelligence");
    vec[0].push_back("expert");
    vec[0].push_back("robotics");

    vec[1].push_back("algorithm");
    vec[1].push_back("sort");
    vec[1].push_back("search");
    vec[1].push_back("time");
    vec[1].push_back("complexity");
    vec[1].push_back("dp");
    vec[1].push_back("memoization");
    vec[1].push_back("graph");
    vec[1].push_back("travelling");
    vec[1].push_back("salesman");
    vec[1].push_back("polynomial");
    vec[1].push_back("function");


    vec[2].push_back("network");
    vec[2].push_back("tcp");
    vec[2].push_back("ip");
    vec[2].push_back("router");
    vec[2].push_back("osi");
    vec[2].push_back("udp");


    vec[3].push_back("database");
    vec[3].push_back("SQL");
    vec[3].push_back("NOSQL");
    vec[3].push_back("hbase");
    vec[3].push_back("relational");
    vec[3].push_back("databases");
    vec[3].push_back("dbms");
    vec[3].push_back("primary");
    vec[3].push_back("key");
    vec[3].push_back("foreign");

    vec[4].push_back("parallel computing");
    vec[4].push_back("parallel");
    vec[4].push_back("distribute");
    vec[4].push_back("hadoop");


    vec[5].push_back("hardware");
    vec[5].push_back("architecture");
    vec[5].push_back("motherboard");


    vec[6].push_back("software");


    vec[7].push_back("machine learning");
    vec[7].push_back("pattern");
    vec[7].push_back("svm");
    vec[7].push_back("kernel");
    vec[7].push_back("nearest");
    vec[7].push_back("neighbours");
    vec[7].push_back("neural");
    vec[7].push_back("networks");
    vec[7].push_back("convolution");

    vec[8].push_back("scientific");

    vec[9].push_back("bioinformatics");
    vec[9].push_back("computational biology");
    vec[9].push_back("computation biology");

    vec[10].push_back("interaction");
    vec[10].push_back("human");

    vec[11].push_back("multimedia");

    vec[12].push_back("graphic");

    vec[13].push_back("computer vision");

    vec[14].push_back("data mining");
    vec[14].push_back("discovery");
    vec[14].push_back("kdd");
    vec[14].push_back("knowledge");
    vec[14].push_back("pattern");
    vec[14].push_back("apriori");
    vec[14].push_back("fp");
    vec[14].push_back("tree");

    //vec[14].push_back("ata Mining");

    vec[15].push_back("language");

    vec[16].push_back("security");
    vec[16].push_back("priavcy");

    vec[17].push_back("retrieval");
    vec[17].push_back("information");

    vec[18].push_back("nlp");
   // vec[18].push_back("atural Language");
    vec[18].push_back("natural language");
    vec[18].push_back("speech");



    vec[19].push_back("www");
    vec[19].push_back("wide web");
  //  vec[19].push_back("ide Web");

    vec[20].push_back("computer education");
   // vec[20].push_back("omputer Education");

   // vec[21].push_back("os");
    vec[21].push_back("operating");

    vec[22].push_back("real time");
    vec[22].push_back("embedded");

    vec[23].push_back("simulation");
    freopen("paper-title.txt", "r", stdin);
    freopen("maped1.txt", "w", stdout);

    string str;
    ll fl,siz;
    while(1) {
        getline(cin, str);
        if(std::cin.eof())
            break;
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        fl=0;
        for (j = 0; j < 24; j++) {
            siz = vec[j].size();

            for (k = 0; k < siz; k++) {
                if (str.find(vec[j][k]) != string::npos) {
//                    cout << str.substr(0,8) << " " << j << endl;
                    fl=j+1;
                    break;
                }
            }
            if (fl!=0) break;
        }
        if (fl>=0) {
            switch(fl) {
                case 1:
                    cout << str.substr(0,8) << ",AI" << endl;
                    break;
                case 2:
                    cout << str.substr(0,8) << ",ALGO" << endl;
                    break;
                case 3:
                    cout << str.substr(0,8) << ",NW" << endl;
                    break;
                case 4:
                    cout << str.substr(0,8) << ",DB" << endl;
                    break;
                case 5:
                    cout << str.substr(0,8) << ",DIST" << endl;
                    break;
                case 6:
                    cout << str.substr(0,8) << ",ARC" << endl;
                    break;
                case 7:
                    cout << str.substr(0,8) << ",SE" << endl;
                    break;
                case 8:
                    cout << str.substr(0,8) << ",ML" << endl;
                    break;
                case 9:
                    cout << str.substr(0,8) << ",SC" << endl;
                    break;
                case 10:
                    cout << str.substr(0,8) << ",BIO" << endl;
                    break;
                case 11:
                    cout << str.substr(0,8) << ",HCI" << endl;
                    break;
                case 12:
                    cout << str.substr(0,8) << ",MUL" << endl;
                    break;
                case 13:
                    cout << str.substr(0,8) << ",GRP" << endl;
                    break;
                case 14:
                    cout << str.substr(0,8) << ",CV" << endl;
                    break;
                case 15:
                    cout << str.substr(0,8) << ",DM" << endl;
                    break;
                case 16:
                    cout << str.substr(0,8) << ",PL" << endl;
                    break;
                case 17:
                    cout << str.substr(0,8) << ",SEC" << endl;
                    break;
                case 18:
                    cout << str.substr(0,8) << ",IR" << endl;
                    break;
                case 19:
                    cout << str.substr(0,8) << ",NLP" << endl;
                    break;
                case 20:
                    cout << str.substr(0,8) << ",WWW" << endl;
                    break;
                case 21:
                    cout << str.substr(0,8) << ",EDU" << endl;
                    break;
                case 22:
                    cout << str.substr(0,8) << ",OS" << endl;
                    break;
                case 23:
                    cout << str.substr(0,8) << ",RT" << endl;
                    break;
                case 24:
                    cout << str.substr(0,8) << ",SIM" << endl;
                    break;
                default:
                    cout << str.substr(0,8) << ",UD" << endl;
                    break;

            }
        }
    }
    return 0;

}