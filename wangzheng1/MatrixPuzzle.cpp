/**
 *  ����n,��������߳�Ϊn�Ļ��ξ���
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;
    cout << "please input the long" << endl;
    cin >> n;
    cout << endl;

    int output[n][n] ;          //����һ����ά�����������
    int min = 0, max = 0;           //�ı䴫��ֵ�����½�
    int k = 1;                      //����ֵ

    for(int i = 0; i < n; i++){     //���������Ʒ
        if(i >= n / 2){
            min = n - i - 1;
            max = i;
        }else{
            min = i;
            max = n - i - 1;
        }
        for(int j = 0; j < n; j++) {     //����������
            output[i][j] = k;            //����ֵ

            if(j < min){
                k++;
            }else if(j >=max && k != 1){
                k--;
            }

        }
    }
    for(int i = 0; i < n; i++){      //��ӡ���
        for(int j = 0; j < n; j++){
            cout << right << setw(3) << output[i][j];
        }
        cout << endl;
    }

    cin.ignore().get();
    return 0;
}
