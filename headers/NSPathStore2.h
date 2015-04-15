
@interface NSPathStore2 : NSString {

    I _lengthAndRefCount;
    [0S] _characters;
}
 + (id) pathStoreWithCharacters:(r^S)alength:(Q)b;
 + (id) pathWithComponents:(id)a;

 - (id) _stringByResolvingSymlinksInPathUsingCache:(BOOL)a;
 - (id) stringByDeletingLastPathComponent;
 - (id) stringByStandardizingPath;
 - (id) pathComponents;
 - (id) _stringByStandardizingPathUsingCache:(BOOL)a;
 - (id) stringByAbbreviatingWithTildeInPath;
 - (id) stringByExpandingTildeInPath;
 - (id) stringByResolvingSymlinksInPath;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) hash;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (BOOL) isEqualToString:(id)a;
 - (Q) length;
 - (id) lastPathComponent;
 - (id) stringByAppendingPathComponent:(id)a;
 - (BOOL) isAbsolutePath;
 - (id) stringByDeletingPathExtension;
 - (id) stringByAppendingPathExtension:(id)a;
 - (id) pathExtension;


@end
