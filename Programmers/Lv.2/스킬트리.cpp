#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;

    for (int i = 0; i < skill_trees.size(); i++) {
        int flag = 1; int n = 0;
        for (int j = 0; j < skill_trees[i].size(); j++) {
            int search = skill.find(skill_trees[i][j]);
            if (search == string::npos)
                continue;
            if (search != n++) {
                flag = 0;
                break;
            }
        }
        if (flag)
            answer++;
    }

    return answer;
}