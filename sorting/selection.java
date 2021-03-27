import java.util.Scanner;
class selection{
    public static void main(String args[]){
        System.out.println("Enter the array size ");
        int n;
        Scanner s = new Scanner(System.in);
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the array elements ");
       for(int i=0;i<n;i++){
           arr[i]=s.nextInt();
       }
       System.out.println("Array after selection sort  ");
       selection sc = new selection();
       sc.selectionsort(arr);
       System.out.println(" Array after sorting is ");
       for(int a=0;a<n;a++){
        System.out.println(arr[a]);
       }
    }



  void selectionsort(int arr[]){
        int n = arr.length;
        int i;
        for(i=0;i<=n-2;i++){
            int min=i;
            for(int j=i+1;j<=n-1;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
         int temp=0;
         temp=arr[i];
         arr[i]=arr[min];
         arr[min]=temp;

        }
    }
} 