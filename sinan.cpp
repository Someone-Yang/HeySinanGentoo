#include<iostream>
#include<windows.h>

using namespace std;

int main() {
	HWND hWnd = NULL;
	OpenClipboard( hWnd );
	EmptyClipboard();
	HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 1000);
	char* pData = (char*) GlobalLock(hHandle);
	strcpy(pData, "司南你服炸了！快去修！");
	SetClipboardData(CF_TEXT, hHandle); 
	GlobalUnlock(hHandle);
	CloseClipboard();
	//以上置剪切板 
	cout << "准备好催司南了吗qwq" << endl;
	cout << "永远不要用这个水程序无缘无故打扰他人！否则后果自负！" << endl;
	cout << endl;
	cout << "食用说明：\n首先设置QQ发送方式为\"按下Enter键发送\"，然后按下任意键，输入一个整数表示发送次数，然后在4秒内点击QQ发送框，倒计时完毕即开始模拟键盘点击。\n重复：如果服务器没炸，不要去打扰司南。\n这也是个开源(水)项目，你可以自行修改自行使用，但出事我不负责XD" << endl; 
	system("pause");
	cout << endl;
	int j;
	cout << "来，告诉我你想刷多少次：";
	do{
	cin >> j;
	if (j <= 0){
		cout << "你输入了个啥？输入一个正确的数值！" << endl;
	}
	}while (j <= 0);
	system("cls");
	cout << "Are you ready kid?\n请点击QQ消息框并等待程序模拟发送。" << endl;
	cout << "4" << endl;
	Sleep(1000);
	cout << "3" << endl;
	Sleep(1000);
	cout << "2" << endl;
	Sleep(1000);
	cout << "1" << endl;
	Sleep(1000);
	cout << "开始for循环模拟敲击！" << endl;
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
	cout << "模拟敲击完毕，感谢游玩（bushi）" << endl;
	system("pause");
	return 0;
}
