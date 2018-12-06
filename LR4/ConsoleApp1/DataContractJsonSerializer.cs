using System;
using System.IO;

namespace ConsoleApp1
{
    internal class DataContractJsonSerializer
    {
        private Type type;

        public DataContractJsonSerializer(Type type)
        {
            this.type = type;
        }

        internal void WriteObject(FileStream fs, Person[] people)
        {
            throw new NotImplementedException();
        }

        internal Person[] ReadObject(FileStream fs)
        {
            throw new NotImplementedException();
        }
    }
}