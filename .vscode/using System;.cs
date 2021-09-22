using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 1, m = 1;
            double sal, fsal, msal;
            double[] noEmp = new double [30];
            double[] ssal = new double[30];
            double[] phsal = new double[30];
            double[] psal = new double[30];

            for (int i = 0; i != 30;i++)
            {
                Console.Write("Enter your salary (Employee no." + m + "): ");
                sal = Convert.ToDouble(Console.ReadLine());
                noEmp[i] = sal;
                ssal[i] = noEmp[i] * 0.04;
                phsal[i] = noEmp[i] * 0.015;
                psal[i] = noEmp[i] * 0.02;
                msal = ssal[i] + phsal[i] + psal[i];
                noEmp[i] = noEmp[i] - msal;
                m++;
            }
            Console.Clear();
            for (int k = 0; k != 30; k++)
            {
                Console.WriteLine("Employee no." + n + " Salary:" + noEmp[k] + "     SSS: " + ssal[k] + "     Philhealth: " + phsal[k] + "     Pag-ibig: " +psal[k]); ;
                n++;
            }

        }
    }
}