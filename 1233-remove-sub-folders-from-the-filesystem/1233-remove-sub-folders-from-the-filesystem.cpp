class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        
        sort(folder.begin(), folder.end()); //sort in dictonary order
        vector<string> ans; // result array

        ans.push_back(folder[0]); // index 0 is always have no sub-folder

        for(int i=1; i<folder.size(); i++){

            string currFolder = folder[i]; //current element
            string prev = ans.back(); prev += '/'; //previous elment for comapre
            
            //if previous element not present in currFolder
            if(currFolder.find(prev) != 0){
                ans.push_back(currFolder);
            }
        }
        return ans;
    }
};