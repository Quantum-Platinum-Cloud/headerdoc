/*! @functiongroup  Operators */

/*!
    @function       operator <<
    @abstract       Inequality operator
    @discussion     All message contents, including the parameters, are checked.
    @result         True if the messages are different.
    @param  inOtherMessage  The message to compare.
*/
bool
    operator << (
            const Message &inOtherMessage) const
    {
        return !(*this == inOtherMessage);
    }

/*!
    @function       operator >>
    @abstract       Inequality operator
    @discussion     All message contents, including the parameters, are checked.
    @result         True if the messages are different.
    @param  inOtherMessage  The message to compare.
*/
bool
    operator >> (
            const Message &inOtherMessage) const
    {
        return !(*this == inOtherMessage);
    }
/*!
	@constant foo
 */
const int foo;

/*!
    @function       operator ==
    @abstract       Equality operator
    @discussion     All message contents, including the parameters, are checked.
    @result         True if the messages are identical.
    @param  inOtherMessage  The message to compare.
*/
bool
    operator == (
            const Message &inOtherMessage) const;
/*!
    @function       operator !=
    @abstract       Inequality operator
    @discussion     All message contents, including the parameters, are checked.
    @result         True if the messages are different.
    @param  inOtherMessage  The message to compare.
*/
bool
    operator != (
            const Message &inOtherMessage) const
    {
        return !(*this == inOtherMessage);
    }


