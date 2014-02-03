#include "ZoomWidget.h"

#include <QMainWindow>
#include <cstdlib>
#include <cstdio>
#include <exception>

int main( int argc, char* argv[] )
{
   try
   {
      QApplication kzoom( argc, argv );

      QMainWindow mw;
      mw.setCentralWidget( new ZoomWidget );
      mw.show();

      return kzoom.exec();
   }
   catch( std::exception& e )
   {
      printf( "*ERROR: %s\n", e.what() );
      return EXIT_FAILURE;
   }
}
