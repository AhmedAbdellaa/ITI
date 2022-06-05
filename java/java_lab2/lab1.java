import java.util.Arrays;
class Lab1 {
	public static void main(String args[]){
		int arr[] = new int[10];
		String choose = args[0]; //first input to choose which lab
		//input
		for(int i = 0 ;i<10 ;i++){
			arr[i] = Integer.parseInt(args[i+1]);
		
		}
		long time;
		switch(choose){
			case "lab1" :
			/******lab 1*******/
			time = System.currentTimeMillis() ;
			//search for min and max
			int min ,max;
			min = max= arr[0];
			for(int i = 1 ; i <10 ; i++){
				if(arr[i]> max){
					max = arr[i];
				}else if (arr[i]<min){
					min = arr[i];
				}
			}
			
			//printing min and max element 
			System.out.println("min number is : "+min);
			System.out.println("max number is : "+max);	
			time = System.currentTimeMillis() - time ;
		      	System.out.println("Current Time in milliseconds = " +time);
		      	
		      	break;
		      	/********lab2 ********/
			case "lab2" :
			time = System.currentTimeMillis() ;
			
			int want_find = Integer.parseInt(args[11]);
			
			Arrays.sort(arr);
			int index = binary_search(arr ,0 ,9 , want_find);
			
			System.out.println(want_find);
			System.out.println(index);	
			
			//for (int i =0 ;i<10; i++){
			//	System.out.println(arr[i]);
			//}		
			
			if (index !=-1)
				System.out.println(":)item found in index : "+index);
			else
				System.out.println("):item not found in index  ");
				
			time = System.currentTimeMillis() - time ;
		      	System.out.println("Current Time in milliseconds = " +time);
				
			break ; 
			/////////////////////////
			default :
			System.out.println("no lab chosee");
			
			
		}
		
	}
	
	public static int binary_search(int arr[], int left , int right ,int item){
	
		if (right >= left){
			int mid = left + (right - left) / 2 ;
		
			
			if (arr[mid] == item)
				return mid ;
				
			if(arr[mid]> item)
				return binary_search(arr,left ,mid-1,item);
				
			else 
				return binary_search(arr,mid+1 ,right , item );
			
		}
		return -1;
	}
	
	


}
