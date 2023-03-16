/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    /**
     * write - write to a file descriptor
     * @filedes: the file descriptor to write to
     * @buf: the buffer to write from
     * @nbytes: the number of bytes to write
     *
     * Description: This function writes @nbytes bytes of the buffer @buf
     * to the file descriptor @filedes. It returns the number of bytes
     * written, or -1 on error.
     *
     * Return: the number of bytes written, or -1 on error
     */
    ssize_t nbytes_written = write(2,
                                    "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
                                    59);

    if (nbytes_written < 0)
    {
        return (1);
    }

    return (1);
}
