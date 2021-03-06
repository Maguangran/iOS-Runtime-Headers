/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactValue : PBCodable <NSCopying> {
    NSMutableArray * _aliases;
    _INPBContactHandle * _contactHandle;
    NSString * _customIdentifier;
    NSString * _firstName;
    NSString * _fullName;
    struct { 
        unsigned int suggestionType : 1; 
    }  _has;
    _INPBImageValue * _image;
    NSString * _lastName;
    int  _suggestionType;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSMutableArray *aliases;
@property (nonatomic, retain) _INPBContactHandle *contactHandle;
@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, readonly) BOOL hasContactHandle;
@property (nonatomic, readonly) BOOL hasCustomIdentifier;
@property (nonatomic, readonly) BOOL hasFirstName;
@property (nonatomic, readonly) BOOL hasFullName;
@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readonly) BOOL hasLastName;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic) int suggestionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (Class)aliasesType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addAliases:(id)arg1;
- (id)aliases;
- (id)aliasesAtIndex:(unsigned int)arg1;
- (unsigned int)aliasesCount;
- (void)clearAliases;
- (id)contactHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (id)fullName;
- (BOOL)hasContactHandle;
- (BOOL)hasCustomIdentifier;
- (BOOL)hasFirstName;
- (BOOL)hasFullName;
- (BOOL)hasImage;
- (BOOL)hasLastName;
- (BOOL)hasSuggestionType;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAliases:(id)arg1;
- (void)setContactHandle:(id)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHasSuggestionType:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
