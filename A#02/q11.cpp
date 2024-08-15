// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << " ** WELCOME TO THE HP GENERAL DIAGNOSTIC PROGRAM ** " << endl;
    cout << " We will use your system information to identify what's wrong " << endl;
    cout << " This system will take 'Y' or 'y' as a YES" << endl;
    cout << endl;
    cout << " ......... " << endl;
    cout << endl;
    cout << " ***** SEARCHING AND IDENTIFYING ***** " << endl;
    cout << " ******* DONE ******* " << endl;
    cout << " 1) REBOOT THE SERVER TO SEE IF CONDITION EXISTS " << endl;
    cout << " Is this a newly installed server ? " << endl;
    char response;
    cin >> response;

    if (response == 'Y' || response == 'y')
    {
        cout << " Dear User ! Reset any components that may have come loose during shipping and restart the server !! " << endl;
        cout << " Does the condition still exist ? " << endl;
        char response_r;
        cin >> response_r;
        if (response_r == 'N' || response_r == 'n')
        {
            cout << " Record action has been taken. " << endl;
            cout << " Congratulations!! WE HOPE YOU LIKED OUR DIAGNOSTIC TOOL. GOOD BYE *__* " << endl;
        }
        else
        {
            if (response_r == 'Y' || response_r == 'y')
            {
                goto m;
            }
        }
    }
    else

    {
        if (response == 'N' || response == 'n')
        m:
            cout << " Were options added or was the configuration changed recently? " << endl;
        char response_rr;
        cin >> response_rr;
        if (response_rr == 'Y' || response_rr == 'y')
        {
            cout << " Isolate what has changed. Verify it was installed correctly. " << endl;
            cout << " Also restore server to last known working state or original shipped configuration ! " << endl;
            cout << endl;
            cout << endl;
            cout << " Does the condition still exist ? " << endl;
            char response_rrr;
            cin >> response_rrr;
            if (response_rrr == 'N' || response_rrr == 'n')
            {
                cout << " Record action has been taken. " << endl;
                cout << " Congratulations!! WE HOPE YOU LIKED OUR DIAGNOSTIC TOOL. GOOD BYE *__* " << endl;
            }
            else
            {
                if (response_rrr == 'Y' || response_rrr == 'y')
                    goto n;
            }
        }
        else
        {
            if (response_rr == 'N' || response_rr == 'n')
                cout << " 1) Check for Service Notifications. " << endl;
            cout << " 2) Download the latest software and firmware from the HP Website. " << endl;
            cout << endl;
            cout << " Dear User, does the condition still exist ? " << endl;
            char response_rrrr;
            cin >> response_rrrr;

            if (response_rrrr == 'N' || response_rrrr == 'n')
            {
                cout << " Record action has been taken. " << endl;
                cout << " Congratulations!! WE HOPE YOU LIKED OUR DIAGNOSTIC TOOL. GOOD BYE *__* " << endl;
            }
            else
            {
                if (response_rrrr == 'Y' || response_rrrr == 'y')
                {
                n:
                    cout << " We're sorry to hear that didn't work.. " << endl;
                    cout << endl;
                    cout << " Please try to isolate and minimize the memory configuration. " << endl;
                    cout << endl;
                    cout << " Dear User, does the condition still exist ? " << endl;
                    char response_rrrrr;
                    cin >> response_rrrrr;
                    if (response_rrrrr == 'N' || response_rrrrr == 'n')
                    {
                        cout << " Record action has been taken. " << endl;
                        cout << " Congratulations!! WE HOPE YOU LIKED OUR DIAGNOSTIC TOOL. GOOD BYE *__* " << endl;
                    }
                    else
                    {
                        if (response_rrrrr == 'Y' || response_rrrrr == 'y')
                        {
                            cout << "We are sorry if that didn't work either :( " << endl;
                            cout << endl;
                            cout << " Please break server down to minimal configuration!! " << endl;
                            cout << endl;
                            cout << " Did that fix your problem ? " << endl;
                            char response__r;
                            cin >> response__r;
                            if (response__r == 'Y' || response__r == 'y')
                            {
                                cout << " ** WE'RE GLAD THIS FIXED YOUR PROBLEM !! " << endl;
                                cout << " Please also add one part at a time back to configuration to isolate faulty component. Thank you! " << endl;
                                cout << endl;
                                cout << " Does your condition still exist ? " << endl;
                                char response__rr;
                                cin >> response__rr;
                                if (response__rr == 'N' || response__rr == 'n')
                                {
                                    cout << " Record action has been taken. " << endl;
                                    cout << " Congratulations!! WE HOPE YOU LIKED OUR DIAGNOSTIC TOOL. GOOD BYE *__* " << endl;
                                }
                                else
                                {
                                    if (response__rr == 'Y' || response__rr == 'y')
                                        goto z;
                                }
                            }
                            else
                            {
                                if (response__r == 'N' || response__r == 'n')
                                    goto b;
                            }
                        }
                        else
                        {
                            if (response_rrrrr == 'Y' || response_rrrrr == 'y')
                            b:
                                cout << " Please troubleshoot or replace basic server spare sparts !!! " << endl;
                            cout << endl;
                            cout << endl;
                            cout << " Does the conditon still exist ? " << endl;
                            char response__rrr;
                            cin >> response__rrr;
                            if (response__rrr == 'N' || response__rrr == 'n')
                            {
                                cout << " Please record symptoms & error information on repair tag if sending back to a fail part. " << endl;
                                cout << endl;
                                cout << " Exiting the Program ******* " << endl;
                                exit(0);
                            }
                            else
                            {
                                if (response__rrr == 'Y' || response__rrr == 'y')
                                {
                                z:
                                    cout << " WE'RE EXTREMELY SORRY WE COULDN'T RESOLVE YOUR ISSUE " << endl;
                                    cout << endl;
                                    cout << endl;
                                    cout << " Please ensure that the following information is available : " << endl;
                                    cout << " 1) Survey configuration snapshots. " << endl;
                                    cout << " 2) OS event log file. " << endl;
                                    cout << " 3) Full crash dump. " << endl;
                                    cout << endl;
                                    cout << " ********************* ";
                                    cout << endl;
                                    cout << " For any further help, Please contact HP Service Provider. " << endl;
                                    cout << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}