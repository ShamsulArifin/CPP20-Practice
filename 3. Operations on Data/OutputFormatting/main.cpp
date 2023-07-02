#include <iostream>
#include <iomanip>

int main()
{
  // std::endl : places a new line character on the output stream.
  //       this is identical to placing '\n' on the output steam.

  std::cout << "Hello";
  std::cout << "World!";

  std::cout << std::endl;

  std::cout << "--------------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World!" << std::endl;

  std::cout << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World!\n";

  //==================================================================
  std::cout << std::endl;

  // std::flush : flushes the output buffer to its final destination.
  std::cout << "This is nice message...." << std::endl
            << std::flush;
  // After this std::flush, we're sure that at thus line, the message has been sent
  // to the stream. This may be important in some applications.
  //==================================================================

  std::cout << std::endl;

  // std::setw() : Adjusts the field width for the item about to be printed.
  // The stew() manipulator only affects the next value to be printed.

  std::cout << "Unformatted table: " << std::endl;
  std::cout << "Daniel"
            << " "
            << "Gray"
            << " "
            << "25" << std::endl;
  std::cout << "Johnson"
            << " "
            << "Doe"
            << " "
            << "34" << std::endl;
  std::cout << "John"
            << " "
            << "Poe"
            << " "
            << "34" << std::endl;
  std::cout << "Henson"
            << " "
            << "Paul"
            << " "
            << "34" << std::endl;

  std::cout << std::endl;
  std::cout << "Formatted table: " << std::endl;

  std::cout << std::setw(10) << "Last Name" << std::setw(10) << "First Name" << std::setw(10) << "Age" << std::endl;
  std::cout << std::setw(10) << "Arizola" << std::setw(10) << "Sal" << std::setw(10) << "30" << std::endl;
  std::cout << std::setw(10) << "Grantz" << std::setw(10) << "Carmelo" << std::setw(10) << "28" << std::endl;
  std::cout << std::setw(10) << "Jacobus" << std::setw(10) << "Merlin" << std::setw(10) << "34" << std::endl;
  std::cout << std::setw(10) << "Momen" << std::setw(10) << "Mitchel" << std::setw(10) << "38" << std::endl;
  std::cout << std::setw(10) << "Bland" << std::setw(10) << "Diane" << std::setw(10) << "39" << std::endl;
  std::cout << std::setw(10) << "Holifield" << std::setw(10) << "Cheryl" << std::setw(10) << "60" << std::endl;

  std::cout << std::endl;
  std::cout << "Formatted table with variables: " << std::endl;

  int colWidth{14};

  std::cout << std::setw(colWidth) << "Last Name" << std::setw(colWidth) << "First Name" << std::setw(colWidth) << "Age" << std::endl;
  std::cout << std::setw(colWidth) << "Munoz" << std::setw(colWidth) << "Russell" << std::setw(colWidth) << "48" << std::endl;
  std::cout << std::setw(colWidth) << "Torres" << std::setw(colWidth) << "Ashley" << std::setw(colWidth) << "51" << std::endl;
  std::cout << std::setw(colWidth) << "Hyatt" << std::setw(colWidth) << "Richard" << std::setw(colWidth) << "53" << std::endl;
  std::cout << std::setw(colWidth) << "Johnson" << std::setw(colWidth) << "Kay" << std::setw(colWidth) << "53" << std::endl;
  std::cout << std::setw(colWidth) << "Henderson" << std::setw(colWidth) << "Mary" << std::setw(colWidth) << "52" << std::endl;
  std::cout << std::setw(colWidth) << "Belser" << std::setw(colWidth) << "Gary" << std::setw(colWidth) << "33" << std::endl;

  //==================================================================
  std::cout << std::endl;

  //Justify : Values can be justified in their fields. There are three manipulators
  //         for adjusting the justification: left, right and internal.
  

  //right justified 
  std::cout << std::endl;
  std::cout << "Right justified table(default): " << std::endl;

  colWidth = 20;

  std::cout << std::right;
  std::cout << std::setw(colWidth) << "Last Name" << std::setw(colWidth) << "First Name" << std::setw(colWidth) << "Age" << std::endl;
  std::cout << std::setw(colWidth) << "Smith" << std::setw(colWidth) << "Beverly" << std::setw(colWidth) << "48" << std::endl;
  std::cout << std::setw(colWidth) << "Boes" << std::setw(colWidth) << "James" << std::setw(colWidth) << "36" << std::endl;
  std::cout << std::setw(colWidth) << "Conyers" << std::setw(colWidth) << "Kimberly" << std::setw(colWidth) << "44" << std::endl;
  std::cout << std::setw(colWidth) << "Marshall" << std::setw(colWidth) << "Charlene" << std::setw(colWidth) << "68" << std::endl;
  std::cout << std::setw(colWidth) << "Baker" << std::setw(colWidth) << "Nathan" << std::setw(colWidth) << "50" << std::endl;
  std::cout << std::setw(colWidth) << "Snads" << std::setw(colWidth) << "Richard" << std::setw(colWidth) << "48" << std::endl;

  //left justified 
  std::cout << std::endl;
  std::cout << "Left justified table: " << std::endl;

  std::cout << std::left;
  std::cout << std::setw(colWidth) << "Last Name" << std::setw(colWidth) << "First Name" << std::setw(colWidth) << "Age" << std::endl;
  std::cout << std::setw(colWidth) << "Smith" << std::setw(colWidth) << "Beverly" << std::setw(colWidth) << "48" << std::endl;
  std::cout << std::setw(colWidth) << "Boes" << std::setw(colWidth) << "James" << std::setw(colWidth) << "36" << std::endl;
  std::cout << std::setw(colWidth) << "Conyers" << std::setw(colWidth) << "Kimberly" << std::setw(colWidth) << "44" << std::endl;
  std::cout << std::setw(colWidth) << "Marshall" << std::setw(colWidth) << "Charlene" << std::setw(colWidth) << "68" << std::endl;
  std::cout << std::setw(colWidth) << "Baker" << std::setw(colWidth) << "Nathan" << std::setw(colWidth) << "50" << std::endl;
  std::cout << std::setw(colWidth) << "Snads" << std::setw(colWidth) << "Richard" << std::setw(colWidth) << "48" << std::endl;

    //Internal justified : sign is left justified, data is right justified 
  std::cout << std::endl;
  std::cout << "Internal Justified: "<<std::endl;
  std::cout << std::right;
  std::cout << std::setw(10) << -123.45 << std::endl;
  std::cout<<std::internal;
  std::cout << std::setw(10) << -123.45 << std::endl;

  //==================================================================
  std::cout << std::endl;

  //with fill
    std::cout << "Left justified table with fill: " << std::endl;

  std::cout << std::left;
  std::cout << std::setfill('-');
  std::cout << std::setw(colWidth) << "Last Name" << std::setw(colWidth) << "First Name" << std::setw(colWidth) << "Age" << std::endl;
  std::cout << std::setw(colWidth) << "Smith" << std::setw(colWidth) << "Beverly" << std::setw(colWidth) << "48" << std::endl;
  std::cout << std::setw(colWidth) << "Boes" << std::setw(colWidth) << "James" << std::setw(colWidth) << "36" << std::endl;
  std::cout << std::setw(colWidth) << "Conyers" << std::setw(colWidth) << "Kimberly" << std::setw(colWidth) << "44" << std::endl;
  std::cout << std::setw(colWidth) << "Marshall" << std::setw(colWidth) << "Charlene" << std::setw(colWidth) << "68" << std::endl;
  std::cout << std::setw(colWidth) << "Baker" << std::setw(colWidth) << "Nathan" << std::setw(colWidth) << "50" << std::endl;
  std::cout << std::setw(colWidth) << "Snads" << std::setw(colWidth) << "Richard" << std::setw(colWidth) << "48" << std::endl;


  return 0;
}