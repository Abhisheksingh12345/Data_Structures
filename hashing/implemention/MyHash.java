package hashing.implemention;
import java.util.ArrayList;
import java.util.LinkedList;

public class MyHash {
    private int bucket_size;
    private ArrayList<LinkedList<Integer>> hash_table;
    MyHash(int bucket_size) {
        this.bucket_size = bucket_size;
        hash_table = new ArrayList<LinkedList<Integer>>(bucket_size);

    }
    public int table_size(){
        return hash_table.size();
    }
    public boolean search(int value) {
        return false;
    }
    public boolean insert(int value) {
        return false;
    }
    public boolean delete(int value) {
        return false;
    }
    public static void main(String[] args) {
    
    }
}
