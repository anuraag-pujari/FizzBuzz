#!/usr/bin/perl

use Data::Dumper;
use feature say;
for(my $i=1;$i<=100;$i++)
{
  if($i%15==0)
{
say "Fizz Buzz";
}elsif($i%5==0)
{
say "Buzz";
}elsif($i%3==0)
{
say "Fizz";
}else{
say $i;
}
}
