/*******************************************************************************
 Copyright (c) 2013 Johan Ceuppens                                           
                                                                             
 All rights reserved.                                                        
                                                                             
 Redistribution and use in source and binary forms, with or without          
 modification, are permitted provided that the following conditions          
 are met:                                                                    
 1. Redistributions of source code must retain the above copyright           
    notice, this list of conditions and the following disclaimer.            
 2. Redistributions in binary form must reproduce the above copyright        
    notice, this list of conditions and the following disclaimer in the      
    documentation and/or other materials provided with the distribution.     
 3. The name of the authors may not be used to endorse or promote products   
    derived from this software without specific prior written permission.    
                                                                             
 THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR       
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES   
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.     
 IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY DIRECT, INDIRECT,           
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT    
 NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,   
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY       
 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT         
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF    
 THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 

 Copyright (C) Johan Ceuppens 2013

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*******************************************************************************/
#include<vector>

#include<my_string.h>
#include<parser.h>

namespace schemeart
{
namespace pondy 
{
using namespace std;

class Pondy : public cola::Parser<string, cola::my_string<string> > 
{
public:
  Pondy();
  virtual ~Pondy();

private:

};

}//namespace pondy 
}//namespace schemeart
