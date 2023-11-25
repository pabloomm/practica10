      /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file caracteres_y_distancias.cc
  * @author Pablo Montes Marichal alu0101648262@ull.edu.es
  * @date Nov 23 2023
  * @brief The program descomposes a quantitiy of seconds introdeuced by the user in hous, minutes and seconds
  * @bug There are no known bugs
  */
 
  #include<iostream>
  #include<vector>
 
  void Cadena(const std::vector<int>& vector1, const std::vector<int>& vector2) {
    for (int x = 0; x < 12; x++) {
      std::cout<< vector1 [x];          
  
    }
  }
  int main() {

  std::vector<int> vector1 { 73, 37, -8, 9, 3, -5, -12, 19, -11, -6, -2};
  std::vector<int> vector2 { 66, 31, 18, -10, -6, -2};
  std::cout<< Cadena( vector1, vector2);
  }
