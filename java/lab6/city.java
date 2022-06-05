

class City{
private int id;
private String name;
private int population;
private String countryCode;

//City(3915, "Oxnard", "USA", 170358));

	public City(int ID , String nam ,  String coun,int pop ){
		id = ID ;
		name = nam ;
		population = pop ;
		countryCode = coun ;
	}

	public void setId(int c){
		id = c;
	}
	public void setName(String c){
		name = c;
	}
	public void setPopulation(int c){
		population = c;
	}
	
	public void setCountryCode(String c){
		countryCode = c;
	}
	
	////////////////////////////
	
	public int getId(){
		return id ;
	}
	public String getName(){
		return name ;
	}
	public int getPopulation(){
		return population ;
	}
	
	public String getCountryCode(){
		return countryCode ;
	}
	@Override
	public String toString(){
	return String.format("name : %-20s| in country : %-5s| with Population : %s",name,countryCode, population);
	}
	
}
