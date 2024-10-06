class Solution {
public:
    bool areSimilarWhenSen1InEdgeOfSen2(
        string sentence1, string sentence2, size_t idxSen1InSen2){
        int size1 = sentence1.size(), size2 = sentence2.size();

        // Return true when sentence1 place in 
        // the begin or the end of sentence2   
        if ((idxSen1InSen2 == 0 && sentence2[size1] == ' ') 
            || (idxSen1InSen2 == size2 - size1 
                && sentence2[idxSen1InSen2-1] == ' ')){
            return true;
        }

        // Otherwise, sentence1 place btw inside sentence2 
        // so we must have insert one more sub-sentence into senten1 
        // => false
        return false;
    }

    bool areSentencesSimilar(string sentence1, string sentence2) {
        // Check spectials cases
        if (sentence1 == sentence2){ 
            // equal => similar
            return true;
        }
        if (sentence1.size() == sentence2.size()){ 
            // same lenght but diff content => false
            return false;
        }
        
        // Swap shorter sentence into sentence1
        if (sentence1.size() > sentence2.size()){
            swap(sentence1, sentence2);
        }
        int size1 = sentence1.size(), size2 = sentence2.size();
        
        // Check when sentence2 contains sentence1 
        size_t idx = sentence2.find(sentence1);
        if (idx != string::npos){
           bool areSimilar = areSimilarWhenSen1InEdgeOfSen2(
                sentence1, sentence2, idx
           );
            if (!areSimilar) {
                size_t lastIdex = sentence2.find_last_of(sentence1);
                areSimilar = areSimilarWhenSen1InEdgeOfSen2(
                    sentence1, sentence2, lastIdex
                );
            }
            return areSimilar;
        }

        // Check when sentence2 doesn't contain sentence1
        // So in order to be similar, the begin chars in sentence1
        // must be the begin chars sentence2 
        // and the last chars in the sentence1 
        // must be the last chars   in the sentence2           
        int fitLeftIdx = -1;
        int i = 0, j = size1 - 1;
        while (i < size1 && sentence1[i] == sentence2[i]){
            if (sentence1[i] == ' '){
                fitLeftIdx = i;
            }
            i++;
        }
        while (j >= 0 
            && sentence1[j] == sentence2[size2 - size1 + j]){
            if (j == fitLeftIdx){
                return true;
            }
            j--;
        }
        return false;
    }
};