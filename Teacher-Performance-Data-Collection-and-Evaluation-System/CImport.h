#pragma once

#include <afxwin.h>
#include <vector>
#include <string>

// CImport �ฺ��� DOCX �ļ��������ݲ���䵽�б�ؼ���
class CImport
{
public:
    // ���캯������������
    CImport(CListCtrl* pListCtrl);
    ~CImport();

    // ������ DOCX �ļ�
    void ImportDocxFiles(const std::vector<std::wstring>& filePaths);

    // �� ListCtrl ���������
    void AddDataToList(const std::wstring& name, double teachingWork, double researchWork, double scientificWork, double otherWork);

private:
    // ListCtrl �ؼ���ָ�룬���浼������
    CListCtrl* m_pListCtrl;

    // �������������ڳ�ʼ�� ListCtrl �ؼ�����
    void InitializeListCtrl();
};
