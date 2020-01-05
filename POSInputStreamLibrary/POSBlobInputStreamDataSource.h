//
//  POSBlobInputStreamDataSource.h
//  POSBlobInputStreamLibrary
//
//  Created by Pavel Osipov on 16.07.13.
//  Copyright (c) 2013 Pavel Osipov. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString * const POSBlobInputStreamDataSourceOpenCompletedKeyPath;
FOUNDATION_EXTERN NSString * const POSBlobInputStreamDataSourceHasBytesAvailableKeyPath;
FOUNDATION_EXTERN NSString * const POSBlobInputStreamDataSourceAtEndKeyPath;
FOUNDATION_EXTERN NSString * const POSBlobInputStreamDataSourceErrorKeyPath;

@protocol POSBlobInputStreamDataSource <NSObject>

//
// Self-explanatory KVO-compliant properties.
//
@property (nonatomic, readonly, getter = isOpenCompleted) BOOL openCompleted;
@property (nonatomic, readonly) BOOL hasBytesAvailable;
@property (nonatomic, readonly, getter = isAtEnd) BOOL atEnd;
@property (nullable, nonatomic, readonly) NSError *error;

//
// This selector will be called before anything else.
//
- (void)open;

//
// Data Source configuring.
//
- (nullable id)propertyForKey:(NSStreamPropertyKey)key;
- (BOOL)setProperty:(nullable id)property forKey:(NSStreamPropertyKey)key;

//
// Data Source data.
// The contracts of these selectors are the same as for NSInputStream.
//
- (NSInteger)read:(uint8_t *)buffer maxLength:(NSUInteger)maxLength;
- (BOOL)getBuffer:(uint8_t * _Nullable * _Nonnull)buffer length:(NSUInteger *)bufferLength;

@end

NS_ASSUME_NONNULL_END
