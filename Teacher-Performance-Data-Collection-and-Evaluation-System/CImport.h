#pragma once
#include <afxwin.h>
#include <vector>
#include <string>

class CImport
{
public:
    CImport(CListCtrl* pListCtrl);
    ~CImport();

    void ImportData(const std::vector<std::wstring>& filePaths); // ���������ļ��Ľӿ�

private:
    CListCtrl* m_pListCtrl; // ���ڲ��� List �ؼ�
    void AddDataToList(const std::wstring& name, int teaching, int research, int other, int total); // ������ݵ�List�ؼ�
};
