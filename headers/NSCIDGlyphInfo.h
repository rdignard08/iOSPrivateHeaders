
@interface NSCIDGlyphInfo : NSGlyphInfo {

    unsigned short _cid;
    unsigned long long _collection;
}
 + (void) initialize;
 + (id) glyphInfoWithCharacterIdentifier:(unsigned long long)acollection:(unsigned long long)bbaseString:(id)c;

 - (id) description;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned int) _glyphForFont:(id)a baseString:(id)b ;
 - (id) initWithCharacterIdentifier:(unsigned long long)a collection:(unsigned long long)b baseString:(id)c ;
 - (unsigned long long) characterIdentifier;
 - (unsigned long long) characterCollection;


@end
