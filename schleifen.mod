MODULE schleifen;
	FROM STextIO IMPORT WriteLn;
	FROM SWholeIO IMPORT WriteInt;
	PROCEDURE Sum(n: INTEGER): INTEGER;
	   VAR i,s: INTEGER;
	BEGIN
	   s := 0;
	   FOR i := 1 TO n DO
		  s := s + 1;
	   END;
	   RETURN s;
	END Sum;
BEGIN
	WriteInt(Sum(10), 5);
	WriteLn();
END schleifen.
