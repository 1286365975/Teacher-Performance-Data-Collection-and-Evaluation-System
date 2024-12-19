#include "pch.h"
#include "CImport.h"
#include <afxdlgs.h>
#include <msxml6.h> // ���ڴ��� XML �Ŀ�

// ���캯��
CImport::CImport(CListCtrl* pListCtrl)
    : m_pListCtrl(pListCtrl)
{
}

// ��������
CImport::~CImport()
{
}

// ���������ļ�
void CImport::ImportData(const std::vector<std::wstring>& filePaths)
{
    for (const auto& filePath : filePaths)
    {
        // �����ü򵥵ķ�ʽ���� docx �ļ���ʵ��ʹ��ʱ��Ҫ�����ӵĴ���
        // ���������Ǵ��ļ�����ȡ���ݵĵط�
        std::wstring name = L"�Ʊ�"; // ģ������
        int teaching = 694;
        int research = 92;
        int other = 50;
        int total = teaching + research + other;

        AddDataToList(name, teaching, research, other, total); // ����ȡ��������ӵ� List �ؼ�
    }
}

// ��������ӵ� List �ؼ�
void CImport::AddDataToList(const std::wstring& name, int teaching, int research, int other, int total)
{
    int index = m_pListCtrl->InsertItem(0, CString(name.c_str()));
    m_pListCtrl->SetItemText(index, 1, CString(std::to_wstring(teaching).c_str()));
    m_pListCtrl->SetItemText(index, 2, CString(std::to_wstring(research).c_str()));
    m_pListCtrl->SetItemText(index, 3, CString(std::to_wstring(other).c_str()));
    m_pListCtrl->SetItemText(index, 4, CString(std::to_wstring(total).c_str()));
}
