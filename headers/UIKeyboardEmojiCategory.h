
@interface UIKeyboardEmojiCategory : NSObject {

    i _categoryType;
    @"NSArray" _emoji;
    q _lastVisibleFirstEmojiIndex;
    @"NSString" _displaySymbol;
}
@property (atomic, assign, readwrite) NSNumber* categoryType;
@property (atomic, retain, readwrite) NSArray* emoji;
@property (nonatomic, assign, readwrite) NSNumber* lastVisibleFirstEmojiIndex;
@property (nonatomic, assign, readonly, name) NSString* name;
@property (atomic, assign, readonly, displaySymbol) NSString* displaySymbol;
 + (id) localizedStringForKey:(id)a;
 + (q) numberOfCategories;
 + (id) categoryForType:(i)a;
 + (id) displayName:(i)a;
 + (id) categories;
 + (BOOL) emojiString:(id)ainGroup:(^I)bwithGroupCount:(i)c;
 + (Q) hasVariantsForEmoji:(id)a;
 + (id) emojiRecentsFromPreferences;

 - (void) dealloc;
 - (id) name;
 - (id) emoji;
 - (void) setEmoji:(id)a;
 - (void) setCategoryType:(i)a;
 - (i) categoryType;
 - (void) releaseCategories;
 - (q) lastVisibleFirstEmojiIndex;
 - (void) setLastVisibleFirstEmojiIndex:(q)a;
 - (id) displaySymbol;


@end
