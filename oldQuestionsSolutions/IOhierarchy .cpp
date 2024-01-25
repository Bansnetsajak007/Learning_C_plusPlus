

/*

What are streams in c++
=> In technical terms, streams are a powerful abstraction for input and output operations. They provide a flexible and extensible way to handle communication with various sources and destinations, such as files, the console, or memory buffers.In simple terms, streams basically mean flow of data between different medium like stander input to stander output and so on 



Description of IO class hierarchy in brief

ios_base: The root class of the I/O class hierarchy.
Contains common properties and methods shared by input and output streams.

ios: Inherits from ios_base. Manages the state of the I/O stream, such as flags indicating the state of the stream (e.g., failbit, eofbit), formatting information, and error handling.


istream: Inherits from ios. Handles input operations.
Provides functions for reading data from various sources, like the keyboard or files.


ostream: Inherits from ios.Handles output operations.
Provides functions for writing data to various destinations, like the console or files.


iostream: Inherits from both istream and ostream.
Combines the functionality of input and output streams, allowing bidirectional I/O operations.


ifstream: Inherits from istream.
Provides functionality for reading from files.


ofstream: Inherits from ostream.
Provides functionality for writing to files.


fstream: Inherits from iostream.
Combines the functionality of both input and output file streams.
*/