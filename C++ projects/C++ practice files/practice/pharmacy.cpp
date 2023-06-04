#include <bits/stdc++.h>
#include <string>
using namespace std;

template <class PharmacySys>
PharmacySys humanRes(PharmacySys a){
    PharmacySys Result=a;
    return Result;
}
class Prescription
{
public:
    static string drug_name;
    static string ReportP;
    static int dosage_duration;
    void store(string a, int b)
    {
        drug_name = a;
        dosage_duration = b;
    }
    string drug_name_sender()
    {
        return drug_name;
    }
};
string Prescription::drug_name = "";
string Prescription::ReportP = "Done Prescription!"; // Defining the static variables
int Prescription::dosage_duration = 0;

/* DRUG MANAGE */
class drugManagement : public Prescription
{ // Single Inheritance gets done here
public:
    char store_Char;
    static string ReportD;
    drugManagement() = default;
    drugManagement(string Prescription)
    { // Constructor is used here
        map<char, string> druglist;
        druglist['A'] = "Amoxicillin";
        druglist['B'] = "Vitamin_D_50";
        druglist['C'] = "Ibuprofen";
        druglist['D'] = "Cetirizine_hydrochloride";
        druglist['E'] = "Azithromycin";

        for (map<char, string>::iterator itr = druglist.begin(); itr != druglist.end(); itr++)
        {
            if ((*itr).second == Prescription)
            {
                store_Char = (*itr).first;
            }
        }
    }
};
string drugManagement::ReportD = "Done Drug Management!";

/* EXPIRY */
class expiry : public drugManagement
{ // Multilevel Inheritance gets done here
public:
    static string finalDrug;
    static string ReportE;
    string temp;
    void checkStock()
    {
        if (store_Char = 'A') /*      A       */
        {
            map<int, string> specificdruglist1;
            specificdruglist1[0] = "";
            specificdruglist1[1] = "Amoxicillin_1"; // the number corresponds to the duration in weeks
            specificdruglist1[2] = "Amoxicillin_2"; // 2 means 2 weeks
            specificdruglist1[3] = "Amoxicillin_3"; // 3 means 3 weeks
            specificdruglist1[4] = "";
            for (map<int, string>::iterator itr = specificdruglist1.begin(); itr != specificdruglist1.end(); itr++)
            {
                if ((*itr).first == dosage_duration)
                {
                    cout << "Found drug...." << endl;
                    finalDrug = (*itr).second;
                    specificdruglist1.erase(itr);
                }
            }
        }
        else if (store_Char = 'B') /*      B       */
        {
            map<int, string> specificdruglist2;
            specificdruglist2[0] = "";
            specificdruglist2[1] = "Vitamin_D_50_1"; // the number corresponds to the duration in weeks
            specificdruglist2[2] = "Vitamin_D_50_2"; // 2 means 2 weeks
            specificdruglist2[3] = "Vitamin_D_50_3"; // 3 means 3 weeks
            specificdruglist2[4] = "Vitamin_D_50_4";
            specificdruglist2[5] = "";
            for (map<int, string>::iterator itr = specificdruglist2.begin(); itr != specificdruglist2.end(); itr++)
            {
                if ((*itr).first == dosage_duration)
                {
                    cout << "Found drug...." << endl;
                    finalDrug = (*itr).second;
                    specificdruglist2.erase(itr);
                }
            }
        }
        else if (store_Char = 'C') /*      C       */
        {
            map<int, string> specificdruglist;
            specificdruglist[0] = "";
            specificdruglist[1] = "Ibuprofen_1"; // the number corresponds to the duration in weeks
            specificdruglist[2] = "Ibuprofen_2"; // 2 means 2 weeks
            specificdruglist[3] = "Ibuprofen_3"; // 3 means 3 weeks
            specificdruglist[4] = "Ibuprofen_4";
            specificdruglist[5] = "Ibuprofen_5";
            specificdruglist[6] = "Ibuprofen_6";
            specificdruglist[7] = "";
            for (map<int, string>::iterator itr = specificdruglist.begin(); itr != specificdruglist.end(); itr++)
            {
                if ((*itr).first == dosage_duration)
                {
                    cout << "Found drug...." << endl;
                    finalDrug = (*itr).second;
                    specificdruglist.erase(itr);
                }
            }
        }
        else if (store_Char = 'D') /*      D       */
        {
            map<int, string> specificdruglist;
            specificdruglist[0] = "";
            specificdruglist[1] = "Cetirizine_hydrochloride_1"; // the number corresponds to the duration in weeks
            specificdruglist[2] = "Cetirizine_hydrochloride_2"; // 2 means 2 weeks
            specificdruglist[3] = "Cetirizine_hydrochloride_3"; // 3 means 3 weeks
            specificdruglist[4] = "Cetirizine_hydrochloride_4";
            specificdruglist[5] = "Cetirizine_hydrochloride_5";
            specificdruglist[6] = "Cetirizine_hydrochloride_6";
            specificdruglist[7] = "Cetirizine_hydrochloride_7";
            specificdruglist[8] = "";
            for (map<int, string>::iterator itr = specificdruglist.begin(); itr != specificdruglist.end(); itr++)
            {
                if ((*itr).first == dosage_duration)
                {
                    cout << "Found drug...." << endl;
                    finalDrug = specificdruglist[(*itr).first];
                    cout << finalDrug;
                    cout << (*itr).second;
                    specificdruglist.erase(itr);
                }
            }
        }
        else if (store_Char = 'E') /*      E       */
        {
            map<int, string> specificdruglist;
            specificdruglist[0] = "";
            specificdruglist[1] = "Azithromycin_1"; // the number corresponds to the duration in weeks
            specificdruglist[2] = "Azithromycin_2"; // 2 means 2 weeks
            specificdruglist[3] = "Azithromycin_3"; // 3 means 3 weeks
            specificdruglist[4] = "";
            for (map<int, string>::iterator itr = specificdruglist.begin(); itr != specificdruglist.end(); itr++)
            {
                if ((*itr).first == dosage_duration)
                {
                    cout << "Found drug...." << endl;
                    finalDrug = (*itr).second;
                    specificdruglist.erase(itr);
                }
            }
        }
    }
};
string expiry ::finalDrug = "";
string expiry ::ReportE = "Done Expiry Class";

/* SMS CLASS */
class SMS : public expiry, Prescription
{
public:
    static string ReportS;
    void generateSMS()
    {
        cout << "__________________________________________________" << endl;
        cout << "/Sending the prescription to doctor and Patient..." << endl;
        cout << "/Drug Name Sent: " << drug_name << "                  " << endl;
        cout << "/Duration of dosage: " << dosage_duration << " weeks  " << endl;
        cout << "/Sending the prescription to Pharmacist...        " << endl;
        cout << "/Exact drug: " << finalDrug << "                   " << endl;
        cout << "/Duration: " << dosage_duration << "              " << endl;
        cout << "/Ending Transmission....                          " << endl;
        cout << "__________________________________________________" << endl;
    }
};
string SMS ::ReportS = "Done Expiry Class";
/*COMMISSION CLASS*/
class Commission : public Prescription
{
public:
    static int Money;
    static string ReportC;
    int getNewBalance()
    {
        int sum = 0;
        if ("Amoxicillin" == drug_name)
        { // A
            for (int i = 0; i < dosage_duration; i++)
            {
                sum = sum + 10;
            }
            Money += sum;
        }
        else if ("Vitamin_D_50" == drug_name)
        { // B
            for (int i = 0; i < dosage_duration; i++)
            {
                sum = sum + 30;
            }
            Money += sum;
        }
        else if ("Ibuprofen" == drug_name)
        { // C
            for (int i = 0; i < dosage_duration; i++)
            {
                sum = sum + 15;
            }
            Money += sum;
        }
        else if ("Cetirizine_hydrochloride" == drug_name)
        { // D
            for (int i = 0; i < dosage_duration; i++)
            {
                sum = sum + 5;
            }
            Money += sum;
        }
        else if ("Azithromycin" == drug_name)
        { // E
            for (int i = 0; i < dosage_duration; i++)
            {
                sum = sum + 50;
            }
            Money += sum;
        }

        return Money;
    }
};
int Commission ::Money = 1000;
string Commission ::ReportC = "Done Commission Class";
/*REPORT CLASS*/
class Report : public Commission, expiry, Prescription, drugManagement, SMS
{
public:
    void printReport(void)
    {
        cout << "Generating Report..." << endl;
        cout << ReportC << endl;
        cout << ReportD << endl;
        cout << ReportE << endl;
        cout << ReportP << endl;
        cout << ReportS << endl;
    }
};
/*DRIVER*/
int main()
{
    Prescription P;
    SMS S;
    Report R;
    string prescription;
    int duration;
    int option;

    while (option != 0)
    {
        cout << "|     !Pharmacy Management System!      |" << endl;
        cout << "|Option 1: Enter prescription.          |" << endl;
        cout << "|Option 2: make sms.                    |" << endl;
        cout << "|Option 3: Check Balance.               |" << endl;
        cout << "|Option 4: Check Report.                |" << endl;
        cout << "|Option 5: Add Balance.                 |" << endl;
        cout << "Enter option: \n";
        cin >> option;
        cout << "*****************************************" << endl;
        switch (option)
        {
        case 1: // first option
            if (option == 1)
                cout << "Enter the prescribed medicine and it's duration in weeks" << endl;
            for (int i = 0; i < 1; i++)
            {
                cin >> prescription;
                cin >> duration;
                P.store(prescription, duration);
                drugManagement D(prescription);
                expiry E;
                E.checkStock();
            }
            break;
        case 2: // second option
            S.generateSMS();
            break;
        case 3:
            cout << "Current Balance: " << endl;
            Commission Com;
            cout << Com.getNewBalance() << " Rupees";
            cout << "\n";
            break;
        case 4:
            try{
            R.printReport();    
            throw(option);
            }
            catch(int a) {
                cout << "Error with Report Class in option: "<<a<<endl;
            }
            break;
        case 5: // fifth option
            int addedMoney;
            cout << "Enter amount you want to add: "<<endl;
            cin >> addedMoney;
            cout << Com.Money + humanRes<int>(addedMoney)<<endl;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }
    return 0;
}
