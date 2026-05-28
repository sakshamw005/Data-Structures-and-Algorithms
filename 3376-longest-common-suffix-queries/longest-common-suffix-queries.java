class Solution {
    int[] lens;
    public int[] stringIndices(String[] wordsContainer, String[] wordsQuery) {
        lens = new int[wordsContainer.length];
        Trie trie = new Trie();

        for (int i = 0; i < wordsContainer.length; i++) {
            lens[i] = wordsContainer[i].length();
            trie.insert(reverse(wordsContainer[i]), i);
        }

        int[] ans = new int[wordsQuery.length];
        for (int i = 0; i < wordsQuery.length; i++) {
            ans[i] = trie.search(reverse(wordsQuery[i]));
        }
        return ans;
    }

    private String reverse(String s) {
        return new StringBuilder(s).reverse().toString();
    }

    class TrieNode {
        TrieNode[] child = new TrieNode[26];
        int idxx = -1;
    }

    class Trie {
        TrieNode root = new TrieNode();

        void insert(String word, int index) {
            TrieNode curr = root;
            update(curr, index);

            for (char ch : word.toCharArray()) {
                int c = ch - 'a';
                if (curr.child[c] == null) curr.child[c] = new TrieNode();
                curr = curr.child[c];
                update(curr, index);
            }
        }

        int search(String word) {
            TrieNode curr = root;
            int ans = curr.idxx;

            for (char ch : word.toCharArray()) {
                int c = ch - 'a';
                if (curr.child[c] == null) break;
                curr = curr.child[c];
                ans = curr.idxx;
            }
            return ans;
        }

        void update(TrieNode node, int index) {
            if (node.idxx == -1 ||
                lens[index] < lens[node.idxx] ||
                (lens[index] == lens[node.idxx] && index < node.idxx)) {
                node.idxx = index;
            }
        }
    }
}