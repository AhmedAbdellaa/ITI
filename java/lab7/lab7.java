import java.util.List;
import java.util.Arrays ;
import java.util.TreeMap ;
import java.util.SortedMap ;
import java.util.Set ;
import java.util.HashSet ;
import java.util.SortedSet ;
import java.util.TreeSet ;
class MainClass {

	public static void main(String args[]){
		String str[] = {"apple", "arrow", "Azure", "Guava", "event", "thrill",
					"quack","responsible","afraid","moor","arch","harass","tame","worry","powerful","highfalutin",
					"normal","boorish","celery","closed","burly","superficial","fairies","writer","scary","repeat",
					"mouth","adjustment","foot","physical","squeamish","whine","reduce","fascinated","substantial",
					"whole","wrong","toothsome","deeply","best","fresh","lush","quartz","tart"};
		Set<String> sstr = new HashSet<>(Arrays.asList(str));
		/*
		for(String st :str ){
		sstr.add(st);
		}
		*/
		
		//System.out.println(sstr.getClass().getName());
		SortedSet<String> input ;
		SortedMap<Character, Set<String>> strings = new TreeMap<>();
		//Character ch='a' ;
		//strings.put(ch,sstr);
		//System.out.println((strings.get​(ch).add("Ahmm")).getClass().getName());
		
		for(String st : sstr){
			Character ch= st.charAt(0) ;
			if(strings.containsKey​(ch)){
				input= new TreeSet<>(strings.get​(ch));
				input.add(st);
				
				strings.put(ch,input);
				
			}else{
				input= new TreeSet<>();
				input.add(st);
				strings.put(ch , input);
			}
		}
		printAll(strings);
		printWordForChar(strings , 'a');
		
	}
	public static void printAll(SortedMap<Character, Set<String>> strings){
		strings.keySet().forEach(k -> System.out.println(k + " -> " + strings.get(k)));
	}
	
	public static void printWordForChar(SortedMap<Character, Set<String>> strings , Character ch ){
	
		if (strings.containsKey​(ch))
			System.out.println(strings.get(ch));
		else
			System.out.println("no item found!!");
	}
}



