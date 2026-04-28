class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        StringBuilder tmp = new StringBuilder(my_string);
        tmp.replace(s, s + overwrite_string.length(), overwrite_string);
        String answer = tmp.toString();
        return answer;
    }

    public void main(String[] args) {
        String result = solution("He11oWor1d", "lloWorl", 2);
        System.out.println(result);
    }
}