class Solution {
    public boolean areSentencesSimilar(String sentence1, String sentence2) {
        String[] w1 = sentence1.split(" ");
        String[] w2 = sentence2.split(" ");

        int n1 = w1.length;
        int n2 = w2.length;

        if (n1 == n2 && sentence1.equals(sentence2)) {
            return true;
        }

        if (n1 > n2) {
            return areSentencesSimilar(sentence2, sentence1);
        }

        int pcount = 0;
        while (pcount < n1 && w1[pcount].equals(w2[pcount])) {
            pcount++;
        }

        int scount = 0;
        while (scount < n1 - pcount && w1[n1 - 1 - scount].equals(w2[n2 - 1 - scount])) {
            scount++;
        }

        return pcount + scount == n1;
    }
}
