#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>

typedef struct s_data {
	std::string	name;
	int			ref;
} Data;

uintptr_t serialize(Data* ptr); 

Data* deserialize(uintptr_t raw); 

/* Type uintptr_t : 
an unsigned integer type with the property that any valid pointer to void can be 
converted to this type, then converted back to pointer to void, and the result will 
compare equal to the original pointer".*/

#endif