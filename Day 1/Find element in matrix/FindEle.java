
import java.util.ArrayList;
public class FindEle {
    static boolean searchMatrix(ArrayList<ArrayList<Integer>> mat, int target) {
        // Write your code here.
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.get(0).size();j++){
                if(mat.get(i).get(j)==target){
                    return true;
                }
            }
        }
        return false;
    }
}