/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    // 주어진 직원의 중요도와 그 부하 직원들의 중요도를 합산하는 함수
    int getImportance(vector<Employee*> employees, int id) {
        // 직원 정보를 빠르게 찾기 위해 ID를 키로 사용하여 해시맵 생성
        unordered_map<int, Employee*> empMap;
        for (auto emp : employees) {
            empMap[emp->id] = emp;
        }

        // 깊이 우선 탐색(DFS)을 사용하여 중요도를 합산하는 함수
        function<int(int)> dfs = [&](int id) {
            Employee* employee = empMap[id];  // 현재 직원 정보를 가져옴
            int total_importance = employee->importance;  // 현재 직원의 중요도를 합산에 포함
            for (int sub_id : employee->subordinates) {  // 부하 직원들을 순회하며
                total_importance += dfs(sub_id);  // 부하 직원의 중요도를 재귀적으로 합산
            }
            return total_importance;  // 총 중요도를 반환
        };

        return dfs(id);  // 주어진 ID의 직원부터 DFS 시작
    }
};