#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;

main()
{
int kur[10],edit, hapus, cari, ketemu=0,temp,bima,bim,data;
bool keadaan=0;
    cout<<"\nINSERT DATA"<<endl<<endl;
	cout << "Masukkan jumlah data : ";
	cin >>data;
        for(int i=0;i<data;i++)
        {
          cout<<"Masukkan Data Ke " << i + 1 << " : ";
          cin>>kur[i];
        }
        for(int i=data-2;i>=0;i--)
        {
            for(int bima=0;bima<=i;bima++)
            {
              if(kur[bima]>kur[bima+1])
                {
                    temp=kur[bima];
                    kur[bima]=kur[bima+1];
                    kur[bima+1]=temp;
                }
            }
            system("CLS");
        }
        for(int i=0;i<data;i++){cout<<"\nData Ke-"<<i+1<<" = "<<kur[i];}
	cout<<"\n\nSEARCHING"<<endl;
	cout << "\nMasukkan Nilai Data Yang Dicari = "; cin >> cari;
	for (int bim = 0; bim<data; bim++)
	{
		if (cari == kur[bim])
        {
            keadaan=true;
            keadaan++;
            if(keadaan==1)
            {
                cout << "\nNilai " << cari << " Terdapat pada index Ke- " << bim+1 <<endl;
                ketemu = 1;
            }
		}
	}
	if (ketemu == 0) cout << "Maaf Data Yang Anda Cari Tidak Ditemukan!";
	cout<<"\nMENGHAPUS\n";
	cout << "\nMasukkan Nilai Data Yang Ingin Dihapus = ";
	cin >> hapus;
	for (int a = 0; a < data; a++)
	{
		if (hapus == kur[a])
		{
			for (int h = a; h < data; h++)
			{
				kur[h]= kur[h + 1];
			}
			data-= 1;
		}
	}
	cout << "\n\nData Baru :";
	for (int m = 0; m<data; m++)
	{
		cout << "\nData Ke-" << m+1 << " = " << kur[m];
	}
	cout<<"\n\nEDIT DATA"<<endl;
	cout << "\nMasukkan Nilai Data Yang Diedit = "; cin >> edit;
	for (int u = 0; u<data; u++)
	{
		if (kur[u] == edit)
		{
			cout << "Masukka Nilai Baru = "; cin >> kur[u];
		}
	}
	for(int i=data-2;i>=0;i--)
    {
        for(int w=0;w<=i;w++)
        {
            if(kur[w]>kur[w+1])
            {
                temp=kur[w];
                kur[w]=kur[w+1];
                kur[w+1]=temp;
            }
        }
    }
    cout << "\nHasil Data Setelah Diedit = ";
    for(int s=0;s<data;s++){cout<<"\nData Ke "<<s+1<<" ="<<kur[s];}
}
