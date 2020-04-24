$x = 1;
sub subfunc1 {
	return $x;
}

sub static {
	my $x = 2;
	return subfunc1();
}

$y = 3;
sub subfunc2 {
	return $y;
}

sub dynamic {
	local $y = 4;
	return subfunc2();
}

#outputs 1 (static scope uses from the saved global frame)
print "static scope", static(), "\n";

#outputs 3 (dynamic scope uses model from the caller's frame)
print "dynamic scope", dynamic(), "\n";