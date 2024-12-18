#pragma once
#include <afxcmn.h>
#include <vector>

// �� CRankingManager.h �򹫹�ͷ�ļ���
// �� CRankingManager.h �򹫹�ͷ�ļ���
struct TeacherPerformance
{
    CString name;
    int teachingPerformance;
    int researchPerformance;
    int otherPerformance;
    int totalPerformance;
    int rank;
};

// ����������
class CRankingManager
{
public:
    // ���캯��������ָ�� CListCtrl ��ָ��
    CRankingManager(CListCtrl* pListCtrl);

    void UpdateRanking();

    // ��������
    void UpdateRanking(std::vector<TeacherPerformance>& dataList);

private:
    CListCtrl* m_pListCtrl; // ���ڲ������Ի����е� CListCtrl
};

