namespace RectangleImp {
   // Rectangle
   class Rectangle
   {
      public: 
         // Declare public methods here
         void setLength(double len);
         double getLength();
         void setWidth(double wid);
         double getWidth();
         double calculateArea();
         double calculatePerimeter();
      private:	
         // Create length and width here
         double length;
         double width;
   }; 

   void Rectangle::setLength(double len)
   {
      // Write setLength here
      length = len;
      return;
   }

   void Rectangle::setWidth(double wid)
   {
      // write setWidth here
      width = wid;
      return;
   }

   double Rectangle::getLength()
   {
      // write getLength here
      return length;
   }

   double Rectangle::getWidth()
   {
      // write getWidth here
      return width;
   }
      
   double Rectangle::calculateArea()
   {
      // write calculateArea here
      getLength();
      getWidth();
      double area = length * width;
      return area;
   }

   double Rectangle::calculatePerimeter()
   {
      // write calculatePerimeter here
      getLength();
      getWidth();
      double perimeter = 2 * (length + width);
      return perimeter;
   }
}