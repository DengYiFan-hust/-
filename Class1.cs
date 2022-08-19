using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculater
{
    /// <summary>
    /// The main<c>AreaClass</c>
    /// Contains the method for calculating the area of rectangles, circles, squares, triangles
    /// <list type="bullet">
    /// <item>
    /// <term>Rectangle</term>
    /// <description>Rectangle Area</description>
    /// </item>
    ///  <item>
    /// <term>Circle</term>
    /// <description>Circle Area</description>
    /// </item>
    ///  <item>
    /// <term>Square</term>
    /// <description>Square Area</description>
    /// </item>
    ///  <item>
    /// <term>Triangle</term>
    /// <description>Triangle Area</description>
    /// </item>
    /// </list>
    /// </summary>
    public class AreaClass
    {
        /// <summary>
        /// Calculate the rectangular area of long <paramref name="a"/> and wide <paramref name="b"/>,
        /// and return the result.
        /// </summary>
        /// <param name="a">length</param>
        /// <param name="b">width</param>
        /// <returns>the area of the rectangular</returns>
        
        public double Rectangle(double a, double b)
        {
            return a * b;
        }
        /// <summary>
        /// Calculate the area of a circle with a radius of <paramref name="r"/>,
        /// and return the result.
        /// </summary>
        /// <param name="r">radius</param>
        /// <returns>the area of the circule</returns>
        public double Circle(double r)
        {
            return 3.14 * r * r;
        }
        /// <summary>
        /// Calculates the area of a square with an edge length of <paramref name="a"/>,
        /// and return the result. 
        /// </summary>
        /// <param name="a">edge length</param>
        /// <returns>the area of the square</returns>
        public double Square(double a)
        {
            return a*a;
        }
        /// <summary>
        /// Calculates the area of a trangle with a base of <paramref name="a"/> and a height <paramref name="h"/>,
        /// and return the result.
        /// </summary>
        /// <param name="a">base length</param>
        /// <param name="h">height</param>
        /// <returns>the area of the triangle</returns>
        public double Triangle(double a, double h)
        {
            return a*h/2;
        }
    }

}
