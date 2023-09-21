package hashing.implemention;
import java.util.ArrayList;
import java.util.LinkedList;

public class MyHash {
    private int bucket_size;
    private ArrayList<LinkedList<Integer>> hash_table;
    MyHash(int bucket_size) {
        this.bucket_size = bucket_size;
        hash_table = new ArrayList<LinkedList<Integer>>();
        for(int i = 0; i < bucket_size; i++)
            hash_table.add(new LinkedList<Integer>());

    }
    public int table_size(){
        return hash_table.size();
    }
    private int get_key(int value) {
        return value % bucket_size;
    }
    public boolean search(int value) {
        LinkedList<Integer> list = hash_table.get(get_key(value));
        for(Integer i : list){
            if(i == value)
                return true;
        }
        return false;
    }
    public boolean insert(int value) {
        LinkedList<Integer> list = hash_table.get(get_key(value));
        list.add(value);
        return true;
    }
    public boolean delete(int value) {
        if(search(value)) {
            LinkedList<Integer> list = hash_table.get(get_key(value));
            list.remove(value);
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        MyHash myHash = new MyHash(7);
        myHash.insert(70);
        myHash.insert(71);
        myHash.insert(9);
        myHash.insert(56);
        myHash.insert(72);
        System.out.println(myHash.search(56));
        System.out.println(myHash.search(57));

        // System.out.println("My bucket size is : "+ myHash.hash_table[0].size());
    }
}
