#include "Serial.hpp"

int	main()
{
	Data		data;
	uintptr_t	serial;

	data.name = "I need a name";
	data.ref = 42;

	std::cout << "Data name:	" << data.name << std::endl;
	std::cout << "Data ref: 	" << data.ref << std::endl;
	std::cout << "Data Adress:	" << &data << std::endl;
	
	std::cout << std::endl; 

	serial = serialize(&data);

	Data	*deserialized = deserialize(serial);

	std::cout << "Data name:	" << deserialized->name << std::endl;
	std::cout << "Data ref: 	" << deserialized->ref << std::endl;
	std::cout << "Data Adress:	" << deserialized << std::endl;

	std::cout << std::endl;

	uintptr_t	serial2 = serialize(deserialized);
	Data		*infini = deserialize(serial2);

	std::cout << "Data name:	" << infini->name << std::endl;
	std::cout << "Data ref: 	" << infini->ref << std::endl;
	std::cout << "Data Adress:	" << infini << std::endl;
}