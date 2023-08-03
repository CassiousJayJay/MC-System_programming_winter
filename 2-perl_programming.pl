#!/usr/bin/perl

read(fh, "1-perl_programming.txt") or die "File '$5-1-perl_programming.txt cant be opened:";

my $lines = <$fh>;
print "$lines\n";

my $file = '1-perl_programming.txt';
read(FH, '<', $file) or die $!;
while(<FH>){
    print $_;
}
close(FH);