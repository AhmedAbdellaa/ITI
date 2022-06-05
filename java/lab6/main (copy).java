
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import java.util.stream.Stream;

class MainClass{

	public static void main(String args[]) {
		InMemoryWorldDao worldDao= InMemoryWorldDao.getInstance();
		Set<String> allContinents=worldDao.getContinents();
		//System.out.println(allContinents);
		Map<String, Country> allCountries=worldDao.getCountries();
		//System.out.println(allCountries);
		Map<Integer, City> allCities=worldDao.getCities();
		//System.out.println(allCities);
		for(Country con:allCountries.values())
		{
			System.out.println("Country: "+con.getName()+" | Code: "+con.getCode());	
		}
		
		/*
		• Find the highest populated city of each country
		• Find the most populated city of each continent
		• Find the highest populated capital city
		*/
		
		//Find the highest populated city of each country
		allCountries.values().stream().forEach((country)-> System.out.println(country.getName()));
	}
}
