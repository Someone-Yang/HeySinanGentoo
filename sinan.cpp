#include<iostream>
#include<windows.h>

using namespace std;

int main() {
	HWND hWnd = NULL;
	OpenClipboard( hWnd );
	EmptyClipboard();
	HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 1000);
	char* pData = (char*) GlobalLock(hHandle);
	strcpy(pData, "˾�����ը�ˣ���ȥ�ޣ�");
	SetClipboardData(CF_TEXT, hHandle); 
	GlobalUnlock(hHandle);
	CloseClipboard();
	//�����ü��а� 
	cout << "׼���ô�˾������qwq" << endl;
	cout << "��Զ��Ҫ�����ˮ������Ե�޹ʴ������ˣ��������Ը���" << endl;
	cout << endl;
	cout << "ʳ��˵����\n��������QQ���ͷ�ʽΪ\"����Enter������\"��Ȼ���������������һ��������ʾ���ʹ�����Ȼ����4���ڵ��QQ���Ϳ򣬵���ʱ��ϼ���ʼģ����̵����\n�ظ������������ûը����Ҫȥ����˾�ϡ�\n��Ҳ�Ǹ���Դ(ˮ)��Ŀ������������޸�����ʹ�ã��������Ҳ�����XD" << endl; 
	system("pause");
	cout << endl;
	int j;
	cout << "��������������ˢ���ٴΣ�";
	do{
	cin >> j;
	if (j <= 0){
		cout << "�������˸�ɶ������һ����ȷ����ֵ��" << endl;
	}
	}while (j <= 0);
	system("cls");
	cout << "Are you ready kid?\n����QQ��Ϣ�򲢵ȴ�����ģ�ⷢ�͡�" << endl;
	cout << "4" << endl;
	Sleep(1000);
	cout << "3" << endl;
	Sleep(1000);
	cout << "2" << endl;
	Sleep(1000);
	cout << "1" << endl;
	Sleep(1000);
	cout << "��ʼforѭ��ģ���û���" << endl;
	for (int i = 1;i <= j;i++){
		keybd_event(VK_CONTROL, 0, KEYEVENTF_EXTENDEDKEY|0, 0);
		keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY|0, 0);
		Sleep(100);
		keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY|KEYEVENTF_KEYUP, 0);
		keybd_event(VK_CONTROL, 0, KEYEVENTF_EXTENDEDKEY|KEYEVENTF_KEYUP, 0);
		keybd_event(VK_RETURN,0,0,0);
		keybd_event(VK_RETURN,0,KEYEVENTF_KEYUP,0);
	}
	system("cls");
	cout << "ģ���û���ϣ���л���棨bushi��" << endl;
	system("pause");
	return 0;
}
