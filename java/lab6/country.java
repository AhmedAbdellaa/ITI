import java.util.List;
import java.util.ArrayList;
class Country {

	private String code ;
	private String name ;
	private String continent ;
	private int population ;
	private double surfaceArea ;
	private double gnp ;
	private int capital ;
	private List<City> cities ;
	//Country("ABW", "Aruba", "North America",103000, 193.00, 828.00, 129));
	
	public Country(String cod , String nam , String con , int pop , double surf , double gn , int cap){
		code = cod ;
		name = nam ;
		continent = con ;
		population = pop ;
		surfaceArea = surf ;
		gnp = gn;
		capital = cap ;
		cities = new ArrayList<> ();
	}
	
	
	public void setCode(String c){
		code = c;
	}
	public void setName(String c){
		name = c;
	}
	public void setContinent(String c){
		continent = c;
	}
	public void setSurfaceArea(double c){
		surfaceArea = c;
	}
	
	public void setPopulation(int c){
		population = c;
	}
	public void setGnp(double c){
		gnp = c;
	}
	public void setCapital(int c){
		capital = c;
	}
	public void setCities(List<City> c){
		cities = c;
	}
	
	
	
	public String getCode(){
		return code ;
	}
	public String getName(){
		return name ;
	}
	public String getContinent(){
		return continent ;
	}
	public double getSurfaceArea(){
		return surfaceArea ;
	}
	
	public int getPopulation(){
		return population ;
	}
	public double getGnp(){
		return gnp ;
	}
	public int getCapital(){
		return capital ;
	}
	public List<City> getCities(){
		return cities;
	}
}
