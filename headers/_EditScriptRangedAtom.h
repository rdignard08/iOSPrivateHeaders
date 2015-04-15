
@interface _EditScriptRangedAtom : NSObject {

    @"NSString" _replacementText;
    {_NSRange="location"Q"length"Q} _editRange;
}
@property (nonatomic, assign, readwrite) NSNumber* editRange;
@property (nonatomic, retain, readwrite) NSString* replacementText;
 + (id) atomWithEditRange:({_NSRange=QQ})areplacementText:(id)b;

 - (id) description;
 - (void) dealloc;
 - (void) setEditRange:({_NSRange=QQ})a;
 - (void) setReplacementText:(id)a;
 - (id) initWithEditRange:({_NSRange=QQ})areplacementText:(id)b;
 - ({_NSRange=QQ}) editRange;
 - (id) replacementText;


@end
