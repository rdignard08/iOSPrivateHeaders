
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

}
@property (atomic, copy, readonly) NSString* stringByRemovingPercentEncoding;
@property (atomic, assign, readonly) NSNumber* length;
 + (double) widthFittingMaximumInteger:(long long)awithFont:(id)b;
 + (id) MCMakeUUID;
 + (id) gs_stringWithFileSystemRepresentation:(r*)a;
 + (id) cutStringGUID;
 + (id) _webkit_localCacheDirectoryWithBundleIdentifier:(id)a;
 + (id) _web_stringWithData:(id)atextEncodingName:(id)b;
 + (id) sbs_stringFromCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (double) defaultLineHeightForFont:(id)a;
 + (double) defaultBaselineOffsetForFont:(id)a;
 + (long long) typesetterBehavior;
 + (float) hyphenationFactor;
 + (BOOL) usesFontLeading;
 + (void) setUsesFontLeading:(BOOL)a;
 + (void) setTypesetterBehavior:(long long)a;
 + (BOOL) usesScreenFonts;
 + (void) setUsesScreenFonts:(BOOL)a;
 + (void) setShowsInvisibleCharacters:(BOOL)a;
 + (BOOL) showsInvisibleCharacters;
 + (void) setShowsControlCharacters:(BOOL)a;
 + (BOOL) showsControlCharacters;
 + (void) setHyphenationFactor:(float)a;
 + (id) stringWithUnichar:(unsigned int)a;
 + (^{USet=}) _characterSetWithPattern:(id)a;
 + (id) _stringWithUnichar:(unsigned int)a;
 + (^{USet=}) _ideographSet;
 + (^{USet=}) _nonIdeographicCharacterSet;
 + (^{USet=}) _nonJapaneseLetterSet;
 + (^{USet=}) _japaneseLetterSet;
 + (^{USet=}) _hiraganaSet;
 + (^{USet=}) _nonHiraganaOrKatakanaSet;
 + (^{USet=}) _nonKatakanaOrKanjiSet;
 + (^{USet=}) _nonHiraganaKatakanaOrBopomofoSet;
 + (^{USet=}) _bopomofoSet;
 + (^{USet=}) _bopomofoToneSet;
 + (^{USet=}) _fullwidthLettersAndNumbersSet;
 + (^{USet=}) _nonFullwidthLettersAndNumbersSet;
 + (unsigned long long) defaultCStringEncoding;
 + (BOOL) supportsSecureCoding;
 + (id) localizedStringWithFormat:(id)a;
 + (id) localizedNameOfStringEncoding:(unsigned long long)a;
 + (id) stringWithCharacters:(r^S)alength:(unsigned long long)b;
 + (id) pathWithComponents:(id)a;
 + (id) stringWithBytes:(r^v)alength:(unsigned long long)bencoding:(unsigned long long)c;
 + (id) stringWithCString:(r*)a;
 + (id) stringWithCString:(r*)alength:(unsigned long long)b;
 + (id) stringWithFormat:(id)alocale:(id)b;
 + (id) stringWithContentsOfFile:(id)a;
 + (id) stringWithContentsOfURL:(id)a;
 + (id) stringWithContentsOfURL:(id)aencoding:(unsigned long long)berror:(^@)c;
 + (id) stringWithContentsOfURL:(id)ausedEncoding:(^Q)berror:(^@)c;
 + (id) stringWithContentsOfFile:(id)ausedEncoding:(^Q)berror:(^@)c;
 + (r^Q) availableStringEncodings;
 + (id) _web_stringRepresentationForBytes:(long long)a;
 + (unsigned long long) stringEncodingForData:(id)aencodingOptions:(id)bconvertedString:(^@)cusedLossyConversion:(^B)d;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) string;
 + (id) stringWithUTF8String:(r*)a;
 + (id) stringWithFormat:(id)a;
 + (id) stringWithString:(id)a;
 + (id) stringWithCString:(r*)aencoding:(unsigned long long)b;
 + (id) stringWithContentsOfFile:(id)aencoding:(unsigned long long)berror:(^@)c;

 - (id) MP_attributedStringWithEmphasizedTextSeparator:(id)aregularTextAttributes:(id)bemphasizedTextAttributes:(id)c;
 - (id) displayableStringByTrimmingPrefixString:(id)a;
 - (id) displayableStringByStrippingOffCommonPrefixWithString:(id)a;
 - (id) commonNonWordBreakingPrefixWithString:(id)aoptions:(unsigned long long)b;
 - (id) MPMediaLibraryDataProviderSystemML3CoercedString;
 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})aatPosition:(int)b;
 - (id) sanitizedString;
 - ({_NSRange=QQ}) _rangeWithoutInsignificantPrefix:(BOOL)aandCharacters:(BOOL)b;
 - (id) _copyWithoutInsignificantPrefix:(BOOL)aandCharacters:(BOOL)b;
 - (id) copyWithoutInsignificantPrefixAndCharacters;
 - (id) copyWithoutInsignificantCharacters;
 - (id) MLSortString;
 - (id) copyUTF8StringOfLength:(unsigned long long)a;
 - (id) MCAppendGreenteaSuffix;
 - (id) MCAppendDeviceName;
 - (id) MCHashedFilenameWithPrefix:(id)aextension:(id)b;
 - (id) MCSHA256DigestWithSalt:(id)a;
 - (id) MCOldStyleSafeFilenameHashWithExtension:(id)a;
 - (unsigned int) MCHash;
 - (id) MCHashedFilenameWithExtension:(id)a;
 - (id) MCOldStyleSafeFilenameHash;
 - (id) MCSHA256DigestWithPasscodeSalt;
 - (void) chmod:(unsigned short)a;
 - (BOOL) validateGSName:(o^@)a;
 - (id) gs_stringByUpdatingPathExtensionWithPathOrURL:(id)a;
 - (BOOL) validateGSNameAllowingDot:(BOOL)aerror:(^@)b;
 - (id) gs_issueExtension:(r*)aerror:(^@)b;
 - (id) gs_issueReadExtensionIfNeededForPid:(int)a;
 - (long long) _caseInsensitiveNumericCompare:(id)a;
 - (id) urlEncodedString;
 - (id) cutStringByResolvingAndStandardizingPath;
 - (id) _ui_secureString;
 - (id) _uikit_stringByTrimmingWhitespaceAndNewlines;
 - (id) _uikit_stringWithWritingDirection:(long long)aasOverride:(BOOL)b;
 - (id) queryKeysAndValues;
 - (id) _uikit_unescapedQueryValue;
 - ({CGSize=dd}) _optimizedSizeWithFont:(id)a;
 - (id) _adjustedFontFromFont:(id)awithinFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bminimumSize:(double)ctextSize:(^{CGSize=dd})d;
 - (id) stringByStandardizingWhitespace;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)aforWidth:(double)blineBreakMode:(long long)c;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})awithFont:(id)b;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)clineBreakMode:(long long)d;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)aconstrainedToSize:({CGSize=dd})b;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)aconstrainedToSize:({CGSize=dd})blineBreakMode:(long long)c;
 - ({CGSize=dd}) _legacy_drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)b;
 - ({CGSize=dd}) _legacy_drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)c;
 - ({CGSize=dd}) _legacy_drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)d;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)aminFontSize:(double)bactualFontSize:(^d)cforWidth:(double)dlineBreakMode:(long long)e;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cfontSize:(double)dlineBreakMode:(long long)ebaselineAdjustment:(long long)f;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cminFontSize:(double)dactualFontSize:(^d)elineBreakMode:(long long)fbaselineAdjustment:(long long)g;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)aforWidth:(double)blineBreakMode:(long long)cletterSpacing:(double)d;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)clineBreakMode:(long long)dletterSpacing:(double)e;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)clineBreakMode:(long long)dletterSpacing:(double)eincludeEmoji:(BOOL)f;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)aconstrainedToSize:({CGSize=dd})blineBreakMode:(long long)clineSpacing:(int)d;
 - ({CGSize=dd}) _legacy_drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)dlineSpacing:(int)e;
 - ({CGSize=dd}) _legacy_drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)dlineSpacing:(int)eincludeEmoji:(BOOL)f;
 - ({CGSize=dd}) _legacy_drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)dlineSpacing:(int)eincludeEmoji:(BOOL)ftruncationRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})g;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cfontSize:(double)dlineBreakMode:(long long)ebaselineAdjustment:(long long)fincludeEmoji:(BOOL)g;
 - ({CGSize=dd}) _legacy_drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cminFontSize:(double)dactualFontSize:(^d)elineBreakMode:(long long)fbaselineAdjustment:(long long)gincludeEmoji:(BOOL)h;
 - ({CGSize=dd}) _legacy_sizeWithFont:(id)a;
 - ({CGSize=dd}) sizeWithFont:(id)aforWidth:(double)blineBreakMode:(long long)cletterSpacing:(double)d;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)clineBreakMode:(long long)dletterSpacing:(double)e;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)clineBreakMode:(long long)dletterSpacing:(double)eincludeEmoji:(BOOL)f;
 - ({CGSize=dd}) sizeWithFont:(id)aconstrainedToSize:({CGSize=dd})blineBreakMode:(long long)clineSpacing:(int)d;
 - ({CGSize=dd}) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)dlineSpacing:(int)e;
 - ({CGSize=dd}) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)dlineSpacing:(int)eincludeEmoji:(BOOL)f;
 - ({CGSize=dd}) _drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)dlineSpacing:(int)eincludeEmoji:(BOOL)ftruncationRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})g;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cfontSize:(double)dlineBreakMode:(long long)ebaselineAdjustment:(long long)fincludeEmoji:(BOOL)g;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cminFontSize:(double)dactualFontSize:(^d)elineBreakMode:(long long)fbaselineAdjustment:(long long)gincludeEmoji:(BOOL)h;
 - ({CGSize=dd}) sizeWithFont:(id)a;
 - ({CGSize=dd}) sizeWithFont:(id)aforWidth:(double)blineBreakMode:(long long)c;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})awithFont:(id)b;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)clineBreakMode:(long long)d;
 - ({CGSize=dd}) sizeWithFont:(id)aconstrainedToSize:({CGSize=dd})b;
 - ({CGSize=dd}) sizeWithFont:(id)aconstrainedToSize:({CGSize=dd})blineBreakMode:(long long)c;
 - ({CGSize=dd}) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)b;
 - ({CGSize=dd}) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)c;
 - ({CGSize=dd}) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFont:(id)blineBreakMode:(long long)calignment:(long long)d;
 - ({CGSize=dd}) sizeWithFont:(id)aminFontSize:(double)bactualFontSize:(^d)cforWidth:(double)dlineBreakMode:(long long)e;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cfontSize:(double)dlineBreakMode:(long long)ebaselineAdjustment:(long long)f;
 - ({CGSize=dd}) drawAtPoint:({CGPoint=dd})aforWidth:(double)bwithFont:(id)cminFontSize:(double)dactualFontSize:(^d)elineBreakMode:(long long)fbaselineAdjustment:(long long)g;
 - (id) _initWithUTF8String:(r*)amaxLength:(unsigned long long)b;
 - (id) _web_possibleURLsForForUserTypedString:(BOOL)a;
 - (id) _web_possibleURLsForUserTypedString;
 - (id) _web_possibleURLPrefixesForUserTypedString;
 - (id) _web_bestURLForUserTypedString;
 - (id) _web_decodeHostName;
 - (BOOL) _webkit_looksLikeAbsoluteURL;
 - (BOOL) _webkit_isJavaScriptURL;
 - (id) _webkit_scriptIfJavaScriptURL;
 - (BOOL) _webkit_isFileURL;
 - (BOOL) _webkit_isFTPDirectoryURL;
 - (id) _webkit_stringByReplacingValidPercentEscapes;
 - ({_NSRange=QQ}) _webkit_rangeOfURLScheme;
 - (id) _webkit_unescapedQueryValue;
 - (BOOL) _web_isUserVisibleURL;
 - (BOOL) _web_hostNameNeedsDecodingWithRange:({_NSRange=QQ})a;
 - (BOOL) _web_hostNameNeedsEncodingWithRange:({_NSRange=QQ})a;
 - (id) _web_decodeHostNameWithRange:({_NSRange=QQ})a;
 - (id) _web_encodeHostNameWithRange:({_NSRange=QQ})a;
 - (id) _web_encodeHostName;
 - (id) _webkit_URLFragment;
 - (id) _webkit_queryKeysAndValues;
 - (id) _web_capitalizeRFC822HeaderFieldName;
 - (BOOL) _webkit_isCaseInsensitiveEqualToString:(id)a;
 - (id) _web_stringByAbbreviatingWithTildeInPath;
 - (id) _web_stringByStrippingReturnCharacters;
 - (BOOL) _webkit_hasCaseInsensitivePrefix:(id)a;
 - (BOOL) _webkit_hasCaseInsensitiveSuffix:(id)a;
 - (BOOL) _webkit_hasCaseInsensitiveSubstring:(id)a;
 - (id) _webkit_filenameByFixingIllegalCharacters;
 - (id) _webkit_stringByTrimmingWhitespace;
 - (id) _webkit_stringByCollapsingNonPrintingCharacters;
 - (id) _webkit_stringByCollapsingWhitespaceCharacters;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) sbs_cgRectValue;
 - (id) stringByStrippingLeadingAndTrailingWhitespace;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectWithSize:({CGSize=dd})aoptions:(long long)battributes:(id)ccontext:(id)d;
 - (void) drawWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})aoptions:(long long)battributes:(id)ccontext:(id)d;
 - (void) drawWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})aoptions:(long long)battributes:(id)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectWithSize:({CGSize=dd})aoptions:(long long)battributes:(id)c;
 - ({CGSize=dd}) _sizeWithSize:({CGSize=dd})aattributes:(id)b;
 - ({CGSize=dd}) sizeWithAttributes:(id)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithAttributes:(id)b;
 - (void) drawAtPoint:({CGPoint=dd})awithAttributes:(id)b;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLType;
 - (id) _stringByTrimmingPrecedingLines;
 - (id) _stringByTrimmingSuccedingLines;
 - (id) _stringByDeletingInteriorSentences;
 - (id) _lastGrapheme;
 - (BOOL) _containsBopomofoOnly;
 - (BOOL) _containsBopomofoToneOnly;
 - (BOOL) _isIdeographicGlyphs;
 - (unsigned long long) _graphemeCount;
 - (BOOL) _containsCJScripts;
 - (unsigned short) _firstChar;
 - (BOOL) containsSubstring:(id)a;
 - (id) _firstGrapheme;
 - (BOOL) _containsJapaneseOnly;
 - (id) stringByReplacingCharacter:(unsigned int)awithCharacter:(unsigned int)b;
 - (BOOL) _containsCJScriptsOnly;
 - (id) _stringByTranscribingFromLanguage:(id)a;
 - (id) _stringByTransliteratingToZhuyin;
 - (BOOL) _containsJapanese;
 - (BOOL) _isTripledPunctuation;
 - (unsigned int) _firstLongCharacter;
 - (BOOL) _contentsExclusivelyInCharacterSet:(^{USet=})a;
 - (BOOL) _containsCJKScriptsOnly;
 - (id) _stringByTranscribingUsingTokenizer:(^{__CFStringTokenizer=})a;
 - (BOOL) _isOnlyIdeographs;
 - (id) _stringByApplyingTransform:(id)a;
 - (id) _stringByTransliteratingToPinyin:(BOOL)a;
 - (id) _stringByTransliteratingToZhuyin:(BOOL)a;
 - (id) _stringByTrimmingCharactersInCFCharacterSet:(^{__CFCharacterSet=})a;
 - (id) _stringByTrimmingLastCharacter;
 - (id) _stringByReplacingCharactersInSet:(^{__CFCharacterSet=})awithCharacter:(unsigned int)b;
 - (id) _stringByReplacingCharacter:(unsigned int)awithCharacter:(unsigned int)b;
 - (BOOL) _endsSentence;
 - (BOOL) _isLeftAssociative;
 - (BOOL) _isPlainSpace;
 - (BOOL) _isSpace;
 - (BOOL) _isSpaceOrReturn;
 - (BOOL) _isNewlineOrReturn;
 - (BOOL) _isDelete;
 - (BOOL) _looksLikeEmailAddress;
 - (BOOL) _looksLikeNumberInput;
 - (BOOL) _looksLikeURL;
 - (BOOL) _isNaturallyRTL;
 - (BOOL) _containsSubstring:(id)a;
 - (unsigned long long) _editDistanceFrom:(id)a;
 - (void) _enumerateLongCharactersInRange:({_NSRange=QQ})ausingBlock:(@?)b;
 - ({_NSRange=QQ}) _rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) _rangeOfCharacterClusterAtIndex:(unsigned long long)awithClusterOffset:(long long)b;
 - ({_NSRange=QQ}) _rangeOfString:(id)afromLocation:(unsigned long long)b;
 - (unsigned long long) _UTF8SizeOfRange:({_NSRange=QQ})a;
 - (BOOL) _isModifierSymbol;
 - (BOOL) _containsIdeographicCharacters;
 - (BOOL) _containsHiraganaOnly;
 - (BOOL) _containsHiraganaOrKatakana;
 - (BOOL) _containsKatakanaOrKanji;
 - (BOOL) _containsHiraganaKatakanaOrBopomofo;
 - (BOOL) _containsEmoji;
 - (BOOL) _containsCJKSymbolsAndPunctuation;
 - (BOOL) _containsFullwidthLettersAndNumbersOnly;
 - (BOOL) _containsFullwidthLettersAndNumbers;
 - (BOOL) _shouldBePaddedWithSpaces;
 - (id) _stringByConvertingFromHalfWidthToFullWidth;
 - (id) _stringByConvertingFromFullWidthToHalfWidth;
 - (id) _stringByTransliteratingToPinyin;
 - (id) _stringByTransliteratingToPinyinAsFamilyName;
 - (id) _stringByTransliteratingToZhuyinAsFamilyName;
 - (id) stringByTrimmingCharactersInCFCharacterSet:(^{__CFCharacterSet=})a;
 - (id) stringByTrimmingLastCharacter;
 - (id) stringByReplacingCharactersInSet:(^{__CFCharacterSet=})awithCharacter:(unsigned int)b;
 - (BOOL) endsSentence;
 - (BOOL) isLeftAssociative;
 - (BOOL) isPlainSpace;
 - (BOOL) isSpace;
 - (BOOL) isSpaceOrReturn;
 - (BOOL) isNewlineOrReturn;
 - (BOOL) isDelete;
 - (BOOL) isTripledPunctuation;
 - (BOOL) looksLikeEmailAddress;
 - (BOOL) looksLikeNumberInput;
 - (BOOL) looksLikeURL;
 - (BOOL) isNaturallyRTL;
 - (unsigned long long) editDistanceFrom:(id)a;
 - (id) _initWithUTF8String:(r*)amaxLength:(unsigned long long)b;
 - (id) stringByEscapingXMLSpecialCharacters;
 - (BOOL) LS_hasCaseInsensitivePrefix:(id)a;
 - (id) queryToDict;
 - (id) LS_unescapedQueryValue;
 - (BOOL) containsString:(id)a;
 - (BOOL) _isCString;
 - (unsigned long long) lengthOfBytesUsingEncoding:(unsigned long long)a;
 - (id) initWithCharactersNoCopy:(^S)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 - (id) initWithBytesNoCopy:(^v)alength:(unsigned long long)bencoding:(unsigned long long)cfreeWhenDone:(BOOL)d;
 - (id) _newSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (BOOL) writeToFile:(id)aatomically:(BOOL)b;
 - (Class) classForCoder;
 - (id) initWithCString:(r*)aencoding:(unsigned long long)b;
 - (BOOL) hasPrefix:(id)a;
 - (BOOL) writeToFile:(id)aatomically:(BOOL)bencoding:(unsigned long long)cerror:(^@)d;
 - (BOOL) writeToURL:(id)aatomically:(BOOL)bencoding:(unsigned long long)cerror:(^@)d;
 - (BOOL) writeToURL:(id)aatomically:(BOOL)b;
 - (id) initWithContentsOfFile:(id)a;
 - (id) _stringByResolvingSymlinksInPathUsingCache:(BOOL)a;
 - (id) stringByDeletingLastPathComponent;
 - (long long) compare:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (BOOL) getFileSystemRepresentation:(char*)amaxLength:(unsigned long long)b;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (BOOL) getBytes:(char*)amaxLength:(unsigned long long)bfilledLength:(^Q)cencoding:(unsigned long long)dallowLossyConversion:(BOOL)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - (id) uppercaseString;
 - (id) capitalizedString;
 - (id) decomposedStringWithCanonicalMapping;
 - (id) precomposedStringWithCanonicalMapping;
 - (id) decomposedStringWithCompatibilityMapping;
 - (id) precomposedStringWithCompatibilityMapping;
 - ({_NSRange=QQ}) rangeOfString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (BOOL) canBeConvertedToEncoding:(unsigned long long)a;
 - (r*) lossyCString;
 - (BOOL) _allowsDirectEncoding;
 - (id) dataUsingEncoding:(unsigned long long)aallowLossyConversion:(BOOL)b;
 - (id) quotedStringRepresentation;
 - (id) initWithFormat:(id)a;
 - (id) stringByReplacingOccurrencesOfString:(id)awithString:(id)b;
 - (id) stringByStandardizingPath;
 - (id) pathComponents;
 - (long long) compare:(id)aoptions:(unsigned long long)b;
 - ({?=b8b4b1b1b18[8S]}) decimalValue;
 - (id) initWithCString:(r*)alength:(unsigned long long)b;
 - (id) initWithCharacters:(r^S)alength:(unsigned long long)b;
 - (id) initWithFormat:(id)alocale:(id)barguments:([1{__va_list_tag=II^v^v}])c;
 - (id) initWithCStringNoCopy:(char*)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 - (id) _stringByStandardizingPathUsingCache:(BOOL)a;
 - (id) stringByAbbreviatingWithTildeInPath;
 - (id) stringByExpandingTildeInPath;
 - (id) stringByResolvingSymlinksInPath;
 - (id) stringsByAppendingPaths:(id)a;
 - (unsigned long long) completePathIntoString:(^@)acaseSensitive:(BOOL)bmatchesIntoArray:(^@)cfilterTypes:(id)d;
 - (id) stringByConvertingPathToURL;
 - (id) stringByConvertingURLToPath;
 - ({_NSRange=QQ}) rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) rangeOfCharacterFromSet:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (id) initWithCString:(r*)a;
 - (id) initWithContentsOfURL:(id)aencoding:(unsigned long long)berror:(^@)c;
 - (id) initWithContentsOfURL:(id)ausedEncoding:(^Q)berror:(^@)c;
 - (id) initWithContentsOfFile:(id)aencoding:(unsigned long long)berror:(^@)c;
 - (id) initWithContentsOfFile:(id)ausedEncoding:(^Q)berror:(^@)c;
 - ({_NSRange=QQ}) _rangeOfRegularExpressionPattern:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})clocale:(id)d;
 - (void) _flushRegularExpressionCaches;
 - ({_NSRange=QQ}) rangeOfString:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})clocale:(id)d;
 - (id) _stringByReplacingOccurrencesOfRegularExpressionPattern:(id)awithTemplate:(id)boptions:(unsigned long long)crange:({_NSRange=QQ})d;
 - (id) stringByReplacingOccurrencesOfString:(id)awithString:(id)boptions:(unsigned long long)crange:({_NSRange=QQ})d;
 - (id) uppercaseStringWithLocale:(id)a;
 - (id) lowercaseStringWithLocale:(id)a;
 - (id) capitalizedStringWithLocale:(id)a;
 - (void) _getBlockStart:(^Q)aend:(^Q)bcontentsEnd:(^Q)cforRange:({_NSRange=QQ})dstopAtLineSeparators:(BOOL)e;
 - (void) enumerateSubstringsInRange:({_NSRange=QQ})aoptions:(unsigned long long)busingBlock:(@?)c;
 - (id) initWithData:(id)aencoding:(unsigned long long)b;
 - (id) _initWithDataOfUnknownEncoding:(id)a;
 - (id) _initWithBytesOfUnknownEncoding:(char*)alength:(unsigned long long)bcopy:(BOOL)cusedEncoding:(^Q)d;
 - ({_NSRange=QQ}) rangeOfComposedCharacterSequencesForRange:({_NSRange=QQ})a;
 - ({_NSRange=QQ}) rangeOfCharacterFromSet:(id)aoptions:(unsigned long long)b;
 - ({_NSRange=QQ}) rangeOfCharacterFromSet:(id)a;
 - (id) componentsSeparatedByCharactersInSet:(id)a;
 - (BOOL) localizedCaseInsensitiveContainsString:(id)a;
 - (id) stringByFoldingWithOptions:(unsigned long long)alocale:(id)b;
 - ({_NSRange=QQ}) lineRangeForRange:({_NSRange=QQ})a;
 - ({_NSRange=QQ}) paragraphRangeForRange:({_NSRange=QQ})a;
 - (void) enumerateLinesUsingBlock:(@?)a;
 - (id) displayableString;
 - (BOOL) getExternalRepresentation:(^@)aextendedAttributes:(^@)bforWritingToURLOrPath:(id)cusingEncoding:(unsigned long long)derror:(^@)e;
 - (id) initWithFormat:(id)alocale:(id)b;
 - (id) propertyListFromStringsFileFormat;
 - (void) getCString:(char*)amaxLength:(unsigned long long)brange:({_NSRange=QQ})cremainingRange:(^{_NSRange=QQ})d;
 - (void) getCString:(char*)amaxLength:(unsigned long long)b;
 - (void) getCString:(char*)a;
 - (id) dataUsingEncoding:(unsigned long long)a;
 - (unsigned long long) maximumLengthOfBytesUsingEncoding:(unsigned long long)a;
 - (id) stringByAddingPercentEscapes;
 - (id) standardizedURLPath;
 - (id) stringByRemovingPercentEscapes;
 - (id) urlPathRelativeToPath:(id)a;
 - (id) stringByAddingPercentEncodingWithAllowedCharacters:(id)a;
 - (id) stringByRemovingPercentEncoding;
 - (id) stringByAddingPercentEscapesUsingEncoding:(unsigned long long)a;
 - (id) stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)a;
 - (id) _web_HTTPStyleLanguageCode;
 - (id) _web_HTTPStyleLanguageCodeWithoutRegion;
 - (id) _web_filenameByFixingIllegalCharacters;
 - (BOOL) _web_looksLikeIPAddress;
 - (BOOL) _web_hasCountryCodeTLD;
 - (long long) _web_countOfString:(id)a;
 - ({_NSRange=QQ}) _web_rangeOfURLResourceSpecifier_nowarn;
 - (id) _web_stringByTrimmingWhitespace;
 - ({_NSRange=QQ}) _web_rangeOfURLScheme_nowarn;
 - (BOOL) _web_hasCaseInsensitivePrefix:(id)a;
 - (BOOL) _web_domainMatches:(id)a;
 - (id) _web_domainFromHost;
 - (id) _web_fixedCarbonPOSIXPath;
 - ({_NSRange=QQ}) _web_rangeOfURLUserPasswordHostPort;
 - ({_NSRange=QQ}) _web_rangeOfURLHost;
 - (BOOL) _web_looksLikeAbsoluteURL;
 - (BOOL) _web_isFileURL;
 - (id) _web_URLFragment;
 - (id) _web_stringByCollapsingNonPrintingCharacters;
 - (unsigned int) _web_extractFourCharCode;
 - (id) _web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)a;
 - (id) _web_splitAtNonDateCommas_nowarn;
 - (id) _web_parseAsKeyValuePair_nowarn;
 - (id) _web_mimeTypeFromContentTypeHeader_nowarn;
 - (id) _web_characterSetFromContentTypeHeader_nowarn;
 - (id) _web_fileNameFromContentDispositionHeader_nowarn;
 - (id) _web_stringByReplacingValidPercentEscapes_nowarn;
 - (BOOL) _web_isJavaScriptURL;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) _getCharactersAsStringInRange:({_NSRange=QQ})a;
 - (BOOL) _getBytesAsData:(^@)amaxLength:(unsigned long long)busedLength:(^Q)cencoding:(unsigned long long)doptions:(unsigned long long)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - ({_NSRange=QQ}) significantText;
 - (id) __escapeString5991;
 - (id) linguisticTagsInRange:({_NSRange=QQ})ascheme:(id)boptions:(unsigned long long)corthography:(id)dtokenRanges:(^@)e;
 - (void) enumerateLinguisticTagsInRange:({_NSRange=QQ})ascheme:(id)boptions:(unsigned long long)corthography:(id)dusingBlock:(@?)e;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) boolValue;
 - (long long) compare:(id)a;
 - (double) doubleValue;
 - (r*) cString;
 - (r*) UTF8String;
 - (unsigned long long) cStringLength;
 - (r*) cStringUsingEncoding:(unsigned long long)a;
 - (BOOL) isNSString__;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) getCString:(char*)amaxLength:(unsigned long long)bencoding:(unsigned long long)c;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) hasSuffix:(id)a;
 - (void) getLineStart:(^Q)aend:(^Q)bcontentsEnd:(^Q)cforRange:({_NSRange=QQ})d;
 - (int) intValue;
 - (long long) longLongValue;
 - (float) floatValue;
 - (unsigned long long) _cfTypeID;
 - (id) _createSubstringWithRange:({_NSRange=QQ})a;
 - (BOOL) _getCString:(char*)amaxLength:(unsigned long long)bencoding:(unsigned int)c;
 - (void) getParagraphStart:(^Q)aend:(^Q)bcontentsEnd:(^Q)cforRange:({_NSRange=QQ})d;
 - (unsigned int) _smallestEncodingInCFStringEncoding;
 - (unsigned int) _fastestEncodingInCFStringEncoding;
 - (unsigned char) _encodingCantBeStoredInEightBitCFString;
 - (long long) compare:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})clocale:(id)d;
 - (id) _stringRepresentation;
 - (id) initWithString:(id)a;
 - (id) propertyList;
 - (id) formatConfiguration;
 - (id) _copyFormatStringWithConfiguration:(id)a;
 - (void) getCharacters:(^S)a;
 - (long long) localizedCompare:(id)a;
 - (long long) localizedStandardCompare:(id)a;
 - (id) commonPrefixWithString:(id)aoptions:(unsigned long long)b;
 - (id) initWithData:(id)ausedEncoding:(^Q)b;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)amaxLength:(unsigned long long)busedLength:(^Q)cencoding:(unsigned long long)doptions:(unsigned long long)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - (id) init;
 - (id) stringByAppendingFormat:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithUTF8String:(r*)a;
 - (id) lowercaseString;
 - (id) lastPathComponent;
 - (id) stringByAppendingPathComponent:(id)a;
 - (id) stringByAppendingString:(id)a;
 - (id) componentsSeparatedByString:(id)a;
 - (id) stringByTrimmingCharactersInSet:(id)a;
 - (BOOL) _web_isCaseInsensitiveEqualToString:(id)a;
 - ({_NSRange=QQ}) rangeOfString:(id)aoptions:(unsigned long long)b;
 - (id) initWithFormat:(id)aarguments:([1{__va_list_tag=II^v^v}])b;
 - (long long) integerValue;
 - (BOOL) isAbsolutePath;
 - (id) stringByDeletingPathExtension;
 - (id) stringByAppendingPathExtension:(id)a;
 - (id) pathExtension;
 - (id) initWithContentsOfURL:(id)a;
 - (id) substringWithRange:({_NSRange=QQ})a;
 - ({_NSRange=QQ}) rangeOfString:(id)a;
 - (id) substringToIndex:(unsigned long long)a;
 - (id) substringFromIndex:(unsigned long long)a;
 - (long long) caseInsensitiveCompare:(id)a;
 - (r*) fileSystemRepresentation;
 - (id) stringByPaddingToLength:(unsigned long long)awithString:(id)bstartingAtIndex:(unsigned long long)c;
 - (long long) localizedCaseInsensitiveCompare:(id)a;
 - (id) stringByReplacingCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (id) _web_stringByExpandingTildeInPath;


@end
